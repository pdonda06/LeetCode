class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i = 0;
        for(int it: nums){
            i = i ^ it;
        }

        return i;
    }
};