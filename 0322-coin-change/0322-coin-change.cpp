
class Solution {
public:
    int dp[10001];  

    int f(vector<int>& coins, int amount) {
        if (amount < 0) return INT_MAX; 
        if (amount == 0) return 0;       

        if (dp[amount] != -1) return dp[amount];  

        int res = INT_MAX;
        for (int coin : coins) {
            int subRes = f(coins, amount - coin);
            if (subRes != INT_MAX) {
                res = min(res, 1 + subRes);
            }
        }
        return dp[amount] = res;
    }

    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int result = f(coins, amount);
        return (result == INT_MAX) ? -1 : result;
    }
};

