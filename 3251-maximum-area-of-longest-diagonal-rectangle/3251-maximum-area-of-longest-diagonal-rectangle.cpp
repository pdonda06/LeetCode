class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        double maxDiag = 0.0;
        int maxArea = 0;

        for(int i = 0; i < n; i++) {
            int l = dimensions[i][0];
            int w = dimensions[i][1];

            double diag = sqrt(1.0 * l * l + 1.0 * w * w);
            int area = l * w;

            if (diag > maxDiag) {
                maxDiag = diag;
                maxArea = area;
            } else if (fabs(diag - maxDiag) < 1e-9) { // diagonals equal
                maxArea = max(maxArea, area);
            }
        }

        return maxArea;
    }
};
