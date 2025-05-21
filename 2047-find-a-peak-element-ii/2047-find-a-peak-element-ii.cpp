class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int k=0;
        int l=0;

        int max=-1;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j] >=max){
                    max=mat[i][j];
                    k=i;
                    l=j;
                }
            }
        }

        return {k,l};
    }
};