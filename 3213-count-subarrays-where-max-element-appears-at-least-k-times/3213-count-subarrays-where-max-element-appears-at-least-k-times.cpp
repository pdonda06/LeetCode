class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxElem = *max_element(nums.begin(), nums.end());
        
        long long res = 0;
        int left = 0, count = 0;

        for (int right = 0; right < n; ++right) {
            if (nums[right] == maxElem) {
                count++;
            }

            // Move left pointer to maintain at least k maxElem
            while (count >= k) {
                if (nums[left] == maxElem) {
                    count--;
                }
                left++;
            }

            // All subarrays ending at 'right' and starting before 'left' are valid
            res += left;
        }

        return res;
    }
};
