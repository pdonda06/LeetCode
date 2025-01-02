class Solution {
public:
    bool isVowel(char& ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        else{
            return false;
        }
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        // unordered_set<char>st;

        int n = words.size();
        int q = queries.size();
        vector<int>ans(q);
        vector<int>cumSum(n);
        int sum=0;

        for(int i=0;i<n;i++){
            if(isVowel(words[i][0]) && isVowel(words[i].back())){
                sum++;
            }
            cumSum[i] = sum;
        }

        for(int i=0;i<q;i++){
            int l = queries[i][0];
            int r = queries[i][1];

            ans[i] = cumSum[r] - ((l>0) ? cumSum[l-1] : 0);
        }

        return ans;
        
    }
};