class Solution {
public:
    long long flowerGame(int n, int m) {
        long long cnt = 0;
        int odds_n = (n+1)/2;
        int even_m = m/2;

        cnt += (1LL * odds_n * even_m);

        int even_n = n/2;
        int odds_m = (m+1)/2;

        cnt += (1LL * odds_m * even_n);

        return cnt;
    }
};