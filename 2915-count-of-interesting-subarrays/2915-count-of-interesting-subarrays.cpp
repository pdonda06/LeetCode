class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        long long ans = 0;
        int count = 0;
        unordered_map<int, long long> freq;
        freq[0] = 1; // prefix count = 0 seen once

        for (int num : nums) {
            if (num % modulo == k) {
                count++;
            }
            int mod_val = count % modulo;
            // The target we're looking for in the map
            int target = (mod_val - k + modulo) % modulo;
            if (freq.find(target) != freq.end()) {
                ans += freq[target];
            }
            freq[mod_val]++;
        }
        return ans;
    }
};