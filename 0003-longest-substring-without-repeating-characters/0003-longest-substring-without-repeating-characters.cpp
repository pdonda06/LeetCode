class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int f[256] = {};

        int i =0;
        int j = 0;
        int ans =0;

        while(j < s.size()){
            //exclude from window 
            f[s[j] - '\0']++;

            while(f[s[j] - '\0'] != 1){
                f[s[i] - '\0']--;
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};