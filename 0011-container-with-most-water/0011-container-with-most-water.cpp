class Solution {
public:
    int maxArea(vector<int>& height) {
        int mxa = 0;
        int l = 0;
        int r = height.size() - 1;


        while(l < r){
            mxa = max(mxa, (r - l)*min(height[l], height[r]));
        if(height[l] < height[r]){
            l++;
        }
        else{
            r--;
        }
        }

        return mxa;
    }
};