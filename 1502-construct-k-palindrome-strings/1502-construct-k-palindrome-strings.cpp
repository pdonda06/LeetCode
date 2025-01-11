class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int> mp;

        if(s.size() == k){
            return true;
        }
        if (s.length() < k) return false;


        for(char c : s){
            mp[c]++;
        }

        int odd = 0;
        for(auto& w : mp){
            if(w.second %2 != 0){
                odd++;
            }
        }

        return odd <= k;
    }
};


// If the number of odd frequencies is greater than k, constructing k palindromes is not possible.