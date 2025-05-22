class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;

        for (int i = 0; i < asteroids.size(); i++) {
            if (asteroids[i] > 0) {
                ans.push_back(asteroids[i]);  // Positive asteroids move right, so just add them.
            } else {
                // Handle collision
                while (!ans.empty() && ans.back() > 0 && ans.back() < abs(asteroids[i])) {
                    ans.pop_back();  // Destroy the smaller positive asteroid
                }

                // If stack is empty or top asteroid is negative, add the current asteroid
                if (ans.empty() || ans.back() < 0) {
                    ans.push_back(asteroids[i]);
                }
                // If the top asteroid is equal in size but opposite in direction, both will be destroyed
                else if (ans.back() == abs(asteroids[i])) {
                    ans.pop_back();
                }
            }
        }

        return ans;
    }
};