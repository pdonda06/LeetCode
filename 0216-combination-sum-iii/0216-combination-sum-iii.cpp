class Solution {
public:
    void generate(vector<int>& nums, vector<int>& temp, int idx, int k, int target, vector<vector<int>>& result) {
        if(target == 0 && temp.size() == k) {
            result.push_back(temp);
            return;
        }

        if(idx >= nums.size() || target < 0) {
            return;
        }

        for(int i = idx; i<nums.size(); i++) {
            temp.push_back(nums[i]);
            generate(nums, temp, i+1, k, target-nums[i], result);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<int> temp;
        vector<vector<int>> result;

        generate(nums, temp, 0, k, n, result);

        return result;
    }
};