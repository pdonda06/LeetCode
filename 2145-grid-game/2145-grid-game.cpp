class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();

        long long fr = 0;

        for (int i = 0; i < n; i++) {
            fr += grid[0][i];
        }

        long long sr = 0;

        long long miniR2 = LONG_LONG_MAX;

        for(int i = 0; i<n; i++){
            //R1
            fr -= grid[0][i];

            //R2
            long long bestR2 = max(sr,fr);

            miniR2 = min(miniR2,bestR2);

            sr += grid[1][i];
        }

        return miniR2;
    }
};