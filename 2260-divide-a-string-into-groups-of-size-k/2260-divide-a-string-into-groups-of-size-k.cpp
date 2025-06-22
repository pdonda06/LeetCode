class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        for(int i =0; i<s.length(); i += k){
            string sub = s.substr(i,k);
            ans.push_back(sub);
        }

        for(int i = 0; i<ans.size(); i++){
            while(ans[i].length() < k){
                ans[i].push_back(fill);
            }
        }

        return ans;
    }
};