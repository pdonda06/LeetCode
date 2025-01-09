class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;

        for(int i=0;i<words.size();i++){
            bool flag = true;
            string s = words[i];
            for(int j=0;j<pref.size();j++){
                if(s[j] != pref[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans++;
            }
        }
        return ans;
        // if(flag == 1){
        //     return ans/pref.size();
        // }
        // else{
        //     return ans;
        // }
    }
};