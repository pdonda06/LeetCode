class Solution {
public:
    bool reorderedPowerOf2(int n) {
        // Precompute sorted digit strings of powers of 2
        static unordered_set<string> powers;
        if (powers.empty()) {
            for (int i = 1; i <= 1e9; i <<= 1) {
                string s = to_string(i);
                sort(s.begin(), s.end());
                powers.insert(s);
            }
        }
        
        // Get sorted string for n
        string s = to_string(n);
        sort(s.begin(), s.end());
        
        return powers.count(s) > 0;
    }
};