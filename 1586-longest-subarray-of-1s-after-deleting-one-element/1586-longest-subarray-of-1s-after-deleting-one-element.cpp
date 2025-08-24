class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int curr = 0;
        int prev = 0;

        for (int num : nums) {
            if (num == 1) {
                curr++;
            } else {
                ans = max(ans, prev + curr);
                prev = curr;
                curr = 0;
            }
        }

        ans = max(ans, prev + curr);

        if (ans == n) {
            return n - 1;
        } else {
            return ans;
        }
    }
};
