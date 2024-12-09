class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> ps(n,0);
        ps[0]=1;

        for(int i=1;i<n;i++){
            if((nums[i]&1) == (nums[i-1]&1)){
                ps[i]=1;
            }
            else{
                ps[i] = 1 + ps[i-1];
            }
        }

        vector<bool> ans;

        for(auto q:queries){
            int start = q[0];
            int end = q[1];

            int size = end - start + 1; 
            if(ps[end]>=size){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }

        return ans;
    }
};