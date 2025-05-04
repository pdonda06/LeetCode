class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count[100] = {}; // Only 100 possible normalized domino values
        int result = 0;

        for (auto& d : dominoes) {
            int a = d[0];
            int b = d[1];
            // Normalize the domino so [2,1] and [1,2] are treated the same
            int key = min(a, b) * 10 + max(a, b);
            result += count[key];
            count[key]++;
        }

        return result;
    }
};
