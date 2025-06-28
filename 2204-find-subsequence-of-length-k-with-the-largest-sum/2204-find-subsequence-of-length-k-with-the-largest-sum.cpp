class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        vector<int> temp = nums;

        for (int i = 0; i < k; i++) {
            int mx = INT_MIN;
            int idx = -1;

            for (int j = 0; j < n; j++) {
                if (temp[j] > mx) {
                    mx = temp[j];
                    idx = j;
                }
            }

            temp[idx] = INT_MIN; // Mark as used
        }

        for (int i = 0; i < n; i++) {
            if (temp[i] == INT_MIN) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};
