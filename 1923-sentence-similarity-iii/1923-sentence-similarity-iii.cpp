// Non-overlapping Approach
class Solution {
private:
    vector<string> extract_words(string sentence){
        sentence += " ";
        vector<string> ans;

        string word = "";
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                ans.push_back(word);
                word="";
            }
            else{
                word += sentence[i];
            }
        }

        return ans;
    }
public:
    bool areSentencesSimilar(string x, string y) {
        // we want x to always be longest to avoid else-if conditions
        if (x.length() < y.length()) {
            swap(x, y);
        }

        // first store the words from sentences
        vector<string> vx, vy;
        vx = extract_words(x);
        vy = extract_words(y);

        int l = 0;
        // Match words from the prefix part
        while (l < vy.size() && l < vx.size() && vx[l] == vy[l]) {
            l++;
        }

        int r = 0;
        // Match words from the suffix part
        while (r < vy.size() && r < vx.size() && vx[vx.size() - 1 - r] == vy[vy.size() - 1 - r]) {
            r++;
        }

        // Check if the prefix and suffix match without overlapping
        return l + r >= vy.size();
    }
};