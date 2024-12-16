class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            auto min = min_element(nums.begin(), nums.end());
            int in = distance(nums.begin(), min); // Get the index of the smallest element
            nums[in] = nums[in]*multiplier;
        }
        return nums;
    }
};