class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;

        // If nums1 has an odd length, XOR all elements in nums2
        if (nums1.size() % 2 == 1) {
            for (int num : nums2) {
                ans ^= num;
            }
        }

        // If nums2 has an odd length, XOR all elements in nums1
        if (nums2.size() % 2 == 1) {
            for (int num : nums1) {
                ans ^= num;
            }
        }

        return ans;
    }
};
