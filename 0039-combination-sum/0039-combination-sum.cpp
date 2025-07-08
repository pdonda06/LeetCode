class Solution {
public:
    set<vector<int>> s;
    void cs(vector<int>& candidates, int target, int idx, vector<vector<int>> &ans, vector<int>& comb){

        if(idx == candidates.size() || target < 0){
            return;
        }

        if(target == 0){
            if(s.find(comb) == s.end()){
                ans.push_back(comb);
                s.insert(comb);
            }
        }
        comb.push_back(candidates[idx]);

        //single inclusion
        cs(candidates, target-candidates[idx], idx+1, ans, comb);
        //multiple
        cs(candidates, target-candidates[idx], idx, ans, comb);

        //exclustion
        comb.pop_back();
        cs(candidates, target, idx+1, ans, comb);


    } 
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;

        cs(candidates, target, 0, ans, comb);

        return ans;
    }
};