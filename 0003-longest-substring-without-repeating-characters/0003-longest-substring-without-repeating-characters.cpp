class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int ans = 0;
        int c = 0;
        for (int j = 0; j < s.length(); j++) {
            for (int i = j; i < s.length(); i++) {
                if (m[s[i]] == -1) {
                    ans = max(ans, c);
                    m.clear();
                    c = 0;
                    i = s.length();
                    m[s[i]] = -1;
                } else {
                    m[s[i]] = -1;
                    c++;
                }
            }
            ans = max(ans, c);
            c=0;
            m.clear();
        }
        return ans;
    }
};