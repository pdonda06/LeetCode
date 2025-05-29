class Solution {
public:
    int climbStairs(int n) {
        int w0 = 1;
        int w1 = 1;

        for(int i = 2; i< n+1; i++){
            int tw = w0 + w1;
            w0 = w1;
            w1 = tw;
        }
        return w1;    
    }
};
