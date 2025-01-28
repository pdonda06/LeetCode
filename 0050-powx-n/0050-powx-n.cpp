class Solution {
public:
    double myPow(double x, int n) {
        if (x == 1) return x; // Any power of 1 is 1
        if (n == 0) return 1; // Any number raised to the power 0 is 1

        long long N = n; // Use long long to handle cases like -2147483648
        if (N < 0) {
            x = 1 / x;
            N = -N; // Convert to positive for calculation
        }

        double result = 1;
        while (N > 0) {
            if (N % 2 == 1) { // If N is odd
                result *= x;
            }
            x *= x; // Square the base
            N /= 2; // Divide the exponent by 2
        }

        return result;
    }
};
