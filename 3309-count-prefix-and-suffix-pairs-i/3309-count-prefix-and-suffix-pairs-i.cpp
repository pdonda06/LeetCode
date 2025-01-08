class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int ans = 0;

        for(int i=0; i<words.size(); i++){
            for(int j=i+1; j<words.size(); j++){
                if(words[i].length() > words[j].length()){
                    continue;
                }
                string a = words[i];
                string b = words[j];
                int cnt = 0, dnt = 0;
                int ii = a.length() - 1;
                int jj = b.length() - 1;

                for(int k=0; k< a.length();k++){
                    if(a[k]!=b[k]){
                        cnt++;
                    }
                    else if(a[ii] != b[jj]){
                        dnt++;
                    }
                    ii--;
                    jj--;
                }
                if(cnt==0 && dnt==0){
                    ans++;
                }

            }
        }
        return ans;
    }
};