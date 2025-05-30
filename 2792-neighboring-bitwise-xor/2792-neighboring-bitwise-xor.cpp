class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();

        //First try with original[0] = 0;
        vector<int> original(n);
        original[0] = 0;
        for(int i = 0; i < n-1; i++) {
            original[i+1] = original[i] ^ derived[i];
        }

        if((original[n-1] ^ original[0]) == derived[n-1]) {
            return true;
        }

        //Now try with original[0] = 1;
        original[0] = 1;
        for(int i = 0; i < n-1; i++) {
            original[i+1] = original[i] ^ derived[i];
        }

        if((original[n-1] ^ original[0]) == derived[n-1]) {
            return true;
        }

        return false;
    }
};