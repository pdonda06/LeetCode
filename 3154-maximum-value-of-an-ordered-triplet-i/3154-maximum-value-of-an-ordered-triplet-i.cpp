class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long m = 0;
        for(int i=0; i<n; i++){
            for(int k = n - 1; k>i; k--){
                int j = i + 1;
                while(j < k){
                    m = max(m,(long(nums[i] - nums[j]) * nums[k]));
                    j++;
                }
            }
        }

        if(m < 0){
            return 0;
        }
        return m;
    }
};