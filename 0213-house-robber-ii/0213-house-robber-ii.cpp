class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        // Exclude last 
        vector<int> memo1(n, -1);
        int case1 = robFrom(nums, 0, n - 2, memo1);

        // Exclude first 
        vector<int> memo2(n, -1);
        int case2 = robFrom(nums, 1, n - 1, memo2);

        return max(case1, case2);
    }

    int robFrom(vector<int>& nums, int start, int end, vector<int>& memo) {
        if (start > end) return 0;
        if (memo[start] != -1) return memo[start];

        int rob = nums[start] + robFrom(nums, start + 2, end, memo);
        int skip = robFrom(nums, start + 1, end, memo);

        return memo[start] = max(rob, skip);
    }
};
