class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string filtered;

        if(n==1){
            return true;
        }

        for(auto c : s){
            if(isalnum(c)){
                filtered.push_back(tolower(c));
            }
        }
        string rev = filtered;
        reverse(rev.begin(),rev.end());
        return filtered == rev;

    }
};