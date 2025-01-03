class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> merged;

        for(auto it:nums1){
            merged.push_back(it);
        }

        for(auto it:nums2){
            merged.push_back(it);
        }


        
        sort(merged.begin(), merged.end());
        // int x = merged.size();
        int x = nums1.size()+nums2.size();
              
        int mid = x/2;
        if(x%2 != 0){ //odd
            return static_cast<double>(merged[mid]);
        }
        
        return (static_cast<double>(merged[mid-1]) + static_cast<double>(merged[mid]))/2.0;
    }
};