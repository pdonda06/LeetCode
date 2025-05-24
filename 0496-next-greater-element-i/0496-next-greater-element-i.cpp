class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> ans(n, -1);
        unordered_map<int , int> mp;

        for (int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]] = i;
        }

        for(int i =0;i<n;i++){
            int j = mp[nums1[i]]+1;
            for(;j<nums2.size();j++){
                if(nums2[j] > nums1[i]){
                    ans[i] = nums2[j];
                    break;
                }
            }
        }

        return ans;
    }
};
