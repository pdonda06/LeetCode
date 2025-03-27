class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: Find the frequency of each element and the dominant element
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        // Find the dominant element (the one with max frequency)
        int dominant = -1;
        int maxFreq = 0;
        for (auto& entry : freq) {
            if (entry.second > maxFreq) {
                dominant = entry.first;
                maxFreq = entry.second;
            }
        }

        // Step 2: Iterate through the array and check valid splits
        int leftCount = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] == dominant) {
                leftCount++;
            }
            
            // Right count is the total count of the dominant element minus the count in the left part
            int rightCount = maxFreq - leftCount;
            
            // Check if the dominant element is dominant in both subarrays
            if (2 * leftCount > i + 1 && 2 * rightCount > n - (i + 1)) {
                return i;
            }
        }
        
        // If no valid split is found, return -1
        return -1;
    }
};
