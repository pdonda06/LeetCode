class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> st;
        int sum = 0;
        int mxNeg = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                st.insert(nums[i]);
            } else {
                mxNeg = max(mxNeg, nums[i]);
            }
        }

        
        for (int element : st) {
            sum+=element;
        }

        if (st.size()) {
            return sum;
        } else {
            return mxNeg;
        }
    }
};