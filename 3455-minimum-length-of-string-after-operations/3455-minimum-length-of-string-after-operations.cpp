class Solution {
public:
    int minimumLength(string s) {
        vector<int> charfq(26,0);
        int cnt = 0;

        for(char c:s){
            charfq[c - 'a']++;
        } 

        for(int i : charfq){
            if(i==0)continue;

            if(i %2 == 0){
                cnt += 2;
            }
            else{
                cnt += 1;
            }
        }
        return cnt;
    }
};