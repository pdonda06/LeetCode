class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        if (n > m)
            return false;

        vector<int> hash1(26, 0);
        vector<int> hash2(26, 0);

        for (int i = 0; i < n; i++) {
            hash1[s1[i] - 'a']++;
            hash2[s2[i] - 'a']++;
        }

        for (int i = n; i <= m; i++) {
            if (hash1 == hash2) {
                return true;
            }
            if (i < m) {
                hash2[s2[i] - 'a']++;
                hash2[s2[i - n] - 'a']--;
            }
        }
        return false;
    }
};