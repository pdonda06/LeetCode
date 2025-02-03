class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int icnt = 1, dcnt = 1, ans = 1;
        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]){
                icnt++;
                dcnt = 1;
            }
            else if(nums[i] < nums[i-1]){
                dcnt++;
                icnt = 1;
            }
            else{
                icnt = 1;
                dcnt = 1;
            }

            ans = max({ans, icnt, dcnt});
        }
        return ans;
    }
};