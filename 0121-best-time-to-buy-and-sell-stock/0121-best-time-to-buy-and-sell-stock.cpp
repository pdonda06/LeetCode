class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int pro = 0;

        for(int i=0;i<prices.size();i++){
            int dif = prices[i] - mini;
            pro = max(pro, dif);
            mini = min(mini, prices[i]);
        }
        return pro;
        
    }
};