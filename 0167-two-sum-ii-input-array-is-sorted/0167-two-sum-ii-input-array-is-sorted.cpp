class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0;
        int right = n - 1;

        while(left < right){
            int ans = numbers[right] + numbers[left];

            if(ans == target){
                return {left+1, right+1};
            }
            else if(target < ans){
                right--;
            }
            else{
                left++;
            }
        }
        return {-1, -1};
    }
};