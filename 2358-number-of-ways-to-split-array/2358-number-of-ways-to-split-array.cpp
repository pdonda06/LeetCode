class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum = accumulate(nums.begin(), nums.end(), 0LL);
        long n = nums.size();
        int cnt=0;
        long long left=0,right=0;

        for(int i=0;i<n-1;i++){
            left = left + nums[i];
            right = sum - left;
            if(left >= right){
                cnt++;
            }
        }
        return cnt;
    }
};