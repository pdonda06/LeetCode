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


// If the length of nums1 is odd, XOR all elements in nums2 with ans.
// If the length of nums2 is odd, XOR all elements in nums1 with ans.
// The result will be the XOR of all elements from both arrays if the respective array lengths are odd. If the length is even, the XOR of that array has no effect, as XORing an element twice cancels it out.
// This approach reduces the time complexity to O(n + m) and avoids the unnecessary memory usage that caused the "Memory Limit Exceeded" error.