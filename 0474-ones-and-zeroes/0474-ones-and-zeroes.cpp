class Solution {
public:
    int dp[601][101][101];

    int z(string& s) {
        return count(s.begin(), s.end(), '0');
    }

    int o(string& s) {
        return count(s.begin(), s.end(), '1');
    }

    int f(vector<string>& a, int i, int m, int n) {
        if (i == a.size()) return 0;
        if (dp[i][m][n] != -1) return dp[i][m][n];
        int cz = z(a[i]), co = o(a[i]);
        int s = f(a, i + 1, m, n), t = 0;
        if (m >= cz && n >= co) t = 1 + f(a, i + 1, m - cz, n - co);
        return dp[i][m][n] = max(s, t);
    }

    int findMaxForm(vector<string>& a, int m, int n) {
        memset(dp, -1, sizeof(dp));
        return f(a, 0, m, n);
    }
};
