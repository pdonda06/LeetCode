class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int maxscore = 0;
        int maxi = values[0];

        for(int j=1;j<n;j++){
            maxscore = max(maxscore, maxi + values[j] - j);
            maxi = max(maxi, values[j] + j);
        }
        return maxscore;
    }
};