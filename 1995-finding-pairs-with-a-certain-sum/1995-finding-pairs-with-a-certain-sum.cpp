class FindSumPairs {
public:
    vector<int>v1;
    vector<int>v2;
    unordered_map<int,int>mp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        v1 = nums1;
        v2 = nums2;
        for(int &x: v2){
            mp[x]++;
        }
    }
    
    void add(int index, int val) {
        mp[v2[index]]--;
        v2[index] += val;
        mp[v2[index]]++;
    }
    
    int count(int tot) {
        int cnt = 0;
        for(int &x: v1){ //v1 ni size nanji chhe aetle
            cnt += mp[tot - x];
        }    
        return cnt;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */