class Solution {
public:
    // int solve(vector<int>& days, vector<int>& costs, int index){
    //     int n = days.size();

    //     //base
    //     if(index >= n){
    //         return 0;
    //     }

    //     //1
    //     int op1 = costs[0] + solve(days, costs, index+1);

    //     //7
    //     int i;
    //     for(i = index; i<n && days[i] < days[index]+7;i++);
        
    //     int op2 = costs[1] + solve(days, costs, i);

    //     //30
    //     for(i = index; i<n && days[i] < days[index]+30;i++);
        
    //     int op3 = costs[2] + solve(days, costs, i);

    //     return min(op1,min(op2,op3));

    // }

    int solveMem(vector<int>& days, vector<int>& costs, int index,vector<int>& dp){
        int n = days.size();

        //base
        if(index >= n){
            return 0;
        }

        if(dp[index] != -1){
            return dp[index];
        }

        //1
        int op1 = costs[0] + solveMem(days, costs, index+1,dp);

        //7
        int i;
        for(i = index; i<n && days[i] < days[index]+7;i++);
        
        int op2 = costs[1] + solveMem(days, costs, i, dp);

        //30
        for(i = index; i<n && days[i] < days[index]+30;i++);
        
        int op3 = costs[2] + solveMem(days, costs, i, dp);

        dp[index] = min(op1,min(op2,op3));
        return dp[index];

    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n+1,-1);
        return solveMem(days, costs, 0, dp);
    }
};