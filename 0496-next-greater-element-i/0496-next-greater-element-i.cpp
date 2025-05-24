class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //sub optimal
        int n = nums1.size();
        vector<int> ans(n, -1), nge(nums2.size(), -1);
        unordered_map<int , int> mp;

        for (int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]] = i;
        }
        stack<int> st;

        for(int i = nums2.size() -1; i>=0; i--){
            while(st.size() > 0 && nums2[i] >= st.top()) st.pop();

            if(st.size() ) nge[i] = st.top();

            st.push(nums2[i]);
        }

        for(int i =0; i<n; i++){
            ans[i] = nge[mp[nums1[i]]];
        }
        return ans;
    }
};
