class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        sort(s.rbegin(),s.rend());

        string res;
        int fr = 1;
        int ptr = 0;

        for(int i=0;i<s.size();i++){
            if(!res.empty() && res.back() == s[i]){
                if(fr < repeatLimit){
                    res += s[i];
                    fr++;
                }
                else{
                    ptr = max(ptr,i+1);
                    while(ptr < s.size() && s[ptr] == s[i]){
                        ptr++;
                    }

                    if(ptr < s.size()){
                        res += s[ptr];
                        swap(s[i],s[ptr]);
                        fr=1;
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                res += s[i];
                fr = 1;
            }
        }

        return res;
    }
};