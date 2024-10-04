class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum = 0;
        int n = skill.size();
        for(int i=0;i<n;i++){
            sum += skill[i];
        }

        int l = n/2;

        if(sum%l !=0){
            return -1;
        }

        int k = sum/l;

        map<int, int>mp;
        long long ans = 0;

        for(int i=0; i<n; i++){
            if(mp.find(k-skill[i]) != mp.end()){
                ans+=(long long)(k-skill[i]) * (long long)(skill[i]);
                mp[k-skill[i]]--;
                if(mp[k-skill[i]]==0){
                    mp.erase(k-skill[i]);
                }

            }
            else{
                mp[skill[i]]++;
            }
        }
        if(mp.size() != 0){
            return -1;
        }
        return ans;
    }
};