class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<nums.size(); i++){
            n = n ^ i;
            n = n ^ nums[i];
        }
        return n;
    }
};