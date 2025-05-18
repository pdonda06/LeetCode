class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        vector<int> ans(n);

        int i = n - k;
        for( ; i<n;i++){
            ans[i - (n - k)] = nums[i];
        }
        for(int i =k; i<n; i++){
            ans[i] = nums[i-k];
        }
        for(int i = 0; i<n; i++){
            nums[i] = ans[i];
        }
    }
};