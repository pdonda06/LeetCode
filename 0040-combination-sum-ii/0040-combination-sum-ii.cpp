class Solution {
public:
    void cs(vector<int>& candidates, int target, int idx, vector<int> &curr,vector<vector<int>> &ans){
        if(target < 0){
            return;
        }
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        for(int i = idx; i<candidates.size(); i++){
            if(i > idx && candidates[i] == candidates[i-1]){
                continue;
            }

            curr.push_back(candidates[i]); // DO
            cs(candidates, target - candidates[i], i + 1, curr, ans); // EXLPORE
            curr.pop_back(); //UNDO 
        }
    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        sort(candidates.begin(), candidates.end());

        cs(candidates, target, 0, curr, ans);

        return ans;
    }
};