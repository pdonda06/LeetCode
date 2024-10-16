class Solution {
    struct ChrFreq {
        int freq;
        char chr;
        ChrFreq(char chr, int freq) : chr(chr), freq(freq) {}
    };
    
    struct compare {
        bool operator()(ChrFreq& A, ChrFreq& B) {
            return B.freq > A.freq;
        }
    };

public:
    string longestDiverseString(int a, int b, int c) {
        string res;
        priority_queue<ChrFreq, vector<ChrFreq>, compare> maxFreqHeap;
        
        if (a > 0) maxFreqHeap.push(ChrFreq('a', a));
        if (b > 0) maxFreqHeap.push(ChrFreq('b', b));
        if (c > 0) maxFreqHeap.push(ChrFreq('c', c));
        
        while (!maxFreqHeap.empty()) {
            auto maxFreqPr = maxFreqHeap.top();
            maxFreqHeap.pop();
            int currSize = res.size();
            
            if (currSize >= 2 && res[currSize - 1] == maxFreqPr.chr && res[currSize - 2] == maxFreqPr.chr) {
                if (maxFreqHeap.empty()) break;
                auto scndMaxFreqPr = maxFreqHeap.top();
                maxFreqHeap.pop();
                res += scndMaxFreqPr.chr;
                if (--scndMaxFreqPr.freq > 0) {
                    maxFreqHeap.push(scndMaxFreqPr);
                }
                maxFreqHeap.push(maxFreqPr);
            } else {
                res += maxFreqPr.chr;
                if (--maxFreqPr.freq > 0) {
                    maxFreqHeap.push(maxFreqPr);
                }
            }
        }
        return res;
    }
};