class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for(int i = 1; i<n-1; i++){
            int f = nums[i-1];
            int m = nums[i];
            int l = nums[i+1];

            if(f + l == m/2.0){
                cnt++;
            } 
        }
        return cnt;
    }
};