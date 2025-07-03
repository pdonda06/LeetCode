class Solution {
public:
    char kthCharacter(int k) {
        int x = __builtin_popcount(k-1); // store 1s from binary
        // cout<<x;
        return 'a' + x;
    }
};