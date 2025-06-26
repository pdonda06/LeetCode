class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n = s.size();
        int count = 0;            // length of valid subsequence
        long long value = 0;      // current value of binary number
        long long base = 1;       // 2^0, 2^1, ...

        // Traverse from right (least significant bit) to left
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == '0') {
                count++; // always include 0
            } else {
                // Try including '1' only if it doesn't overflow or exceed k
                if (value + base <= k) {
                    value += base;
                    count++;
                }
            }

            // Update base (but avoid overflow)
            if (base <= k) {
                base <<= 1;
            } else {
                // Don't increase base anymore; too large to be usable
                base = k + 1;
            }
        }

        return count;
    }
};
