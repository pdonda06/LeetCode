class Solution {
public:
    int maxScore(string s) {
        int n = s.size();

        int o = 0;
        int z = 0;
        int best = INT_MIN;

        for(int i=0; i<n-1; i++){
            if(s[i] == '1'){
                o++;
            }
            else{
                z++;
            }
            best = max(best, z - o);

        }

        if(s[n-1] == '1'){
            o++;
        }
        return best + o;
    }
};