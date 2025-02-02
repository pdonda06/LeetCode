class Solution {
public:
    bool check(vector<int>& nums) {
        int peak = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] > nums[(i+1) % n]){
                peak++;
            }
        }

        //return peak<=1;

        if(peak <= 1){
            return true;
        }
        return false;
    }
};