class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int cursum = nums[0];

        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]){
                cursum+= nums[i];
            }
            else{
                sum = max(sum, cursum);
                cursum = nums[i];
            }
        }

        return max(sum, cursum);
    }
};