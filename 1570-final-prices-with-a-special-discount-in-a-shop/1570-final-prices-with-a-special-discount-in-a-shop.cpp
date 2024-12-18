class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n =prices.size();
        // vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(prices[j] <= prices[i]){
                    prices[i] = prices[i] - prices[j];
                    // ans.push_back(x);
                    break;
                }
            }
        }

        return prices;
    }
};