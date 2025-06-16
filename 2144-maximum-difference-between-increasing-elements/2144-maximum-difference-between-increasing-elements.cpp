class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();

        int mx = 0;

        for(int i =0; i<n; i++){
            for(int j =i+1; j<n; j++){
                if(nums[j] > nums[i]){
                    mx = max(mx, nums[j]-nums[i]);
                }
            }
        }

        if(mx == 0){
            return -1;
        }

        return mx;
    }
};