class Solution {
public:
    int solve(vector<int>& nums, int i, int Xor){
        if(i>= nums.size()) return Xor;

        return solve(nums, i+1, nums[i]^Xor) + solve(nums, i+1, Xor);
    }
    int subsetXORSum(vector<int>& nums) {
        return solve(nums, 0, 0);
    }
};