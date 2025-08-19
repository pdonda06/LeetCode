class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt = 0, ans = 0;

        for(int num : nums){
            if(num == 0){
                ans++;
                cnt += ans;
            }
            else{
                ans = 0;
            }
        }

        return cnt;
    }
};