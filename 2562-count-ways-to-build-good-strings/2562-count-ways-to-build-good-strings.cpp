class Solution {
public:
    int mod = 1000000007;

    int countGoodStrings(int low, int high, int zero, int one) {
        //overlapping
        vector<int> dp(high + 1, -1);
        return count(low, high, zero, one, 0, dp) % mod;
    }

private:
    int count(int low, int high, int zero, int one, int len, vector<int>& dp) {
        if (len > high) return 0;
        if (dp[len] != -1) return dp[len];
        
        // Recursive 
        int ans = (count(low, high, zero, one, len + zero, dp) % mod
                  + count(low, high, zero, one, len + one, dp) % mod) % mod;

        // Add 1 to the ans if a valid string is formed
        if (len >= low && len <= high) ans += 1;
        return dp[len] = ans % mod;
    }
};
