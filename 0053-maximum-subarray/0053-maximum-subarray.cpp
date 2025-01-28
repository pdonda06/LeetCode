class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN;
        int cur = 0;

        for(int i=0;i<nums.size();i++){
            cur += nums[i];

            if(cur > mx){
                mx = cur;
            }
            if(cur < 0){
                cur = 0;
            }
        }
        return mx;
    }
};