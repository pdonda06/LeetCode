class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
       unordered_set<int> notuse(banned.begin(),banned.end());
       int maxcnt=0;
       int sum=0;

       for(int i=1;i<=n;i++){
        if(notuse.count(i)==0){
            sum+=i;
            if(sum>maxSum){
                break;
            }
            maxcnt++;
        }
       } 
       return maxcnt;
    }
};