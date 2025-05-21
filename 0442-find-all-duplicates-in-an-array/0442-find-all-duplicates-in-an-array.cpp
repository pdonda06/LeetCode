class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> answer;

        int ans = 0;
        for(int i =0; i<nums.size() - 1; i++){
            ans = nums[i] ^ nums[i+1];
            if(ans == 0){
                answer.push_back(nums[i]);
            }
        }

        return answer;
    }
};