class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
      long long val = k;
      int cnt_ops = 0;

      while(val > 1){
        int jmps = ceil(log2(val));
        val = val - pow(2,jmps-1);
        cnt_ops = cnt_ops + operations[jmps-1];
      }  

      return char('a' + (cnt_ops % 26));
    }
};