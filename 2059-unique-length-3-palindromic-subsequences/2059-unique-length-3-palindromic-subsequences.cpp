class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        unordered_set<char> letters;

        for(int i=0;i<n;i++){
            letters.insert(s[i]);
        }

        int res = 0;

        for(char letter:letters){
            int left_idx = -1;
            int right_idx = -1;

            for(int i=0;i<n;i++){
                if(s[i] == letter){
                    if(left_idx == -1){
                        left_idx = i;
                    }
                    right_idx = i;
                }
            }

        unordered_set<char> st;
        for(int mid = left_idx+1; mid<=right_idx-1; mid++){
            st.insert(s[mid]);
        }

        res +=st.size();
        }
        return res;
    }
};