class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        if(s.length() != t.length()){
            return false;
        }

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            mp[t[i]]--;
        }

        int n= s.length();
        for(auto i:mp){
            if(i.second >= 1 ){
                return false;
            }
        }        

        return true;
    }
};