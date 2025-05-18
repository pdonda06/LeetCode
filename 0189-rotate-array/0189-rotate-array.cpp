class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int n=nums.size();
        int j=0; 

        for(int i=0;i<n;i++){
            
            if(i+k+1 < n){
                ans.push_back(i+k+1);
            }
            else{
                ans.push_back(j);
                j++;
            }
            
        }
       
    //    int n=nums.size();
    //    k = k % n;
    //    reverse(nums.begin(),nums.end());
    //    reverse(nums.begin(),nums.begin()+k);
    //    reverse(nums.begin()+k,nums.end());
    }
};