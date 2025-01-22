class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>res;

        for(const auto ro: grid){
            for(auto i: ro){
                res.push_back(i);
            }
        }

        sort(res.begin(),res.end());
        vector<int>ans(2,0);
        
        for(int i=1;i<res.size();i++){
            if(res[i] == res[i-1]){
                ans[0] = res[i];
            }
        }

        int n = res.size();
        int sum = accumulate(res.begin(), res.end(), 0);
        int rsum = (n*(n+1))/2;
        
        int dif = rsum - sum;

        ans[1] = dif + ans[0];


        return ans;
    }
};