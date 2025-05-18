class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int cnt = 0;
        sort(nums.begin(), nums.end());

        while(left < right){
            int ans = nums[right] + nums[left];

            if(ans == k){
                cnt++;
                left++;
                right--;
            }
            else if(k < ans){
                right--;
            }
            else{
                left++;
            }
        }
        return cnt;
    }
};