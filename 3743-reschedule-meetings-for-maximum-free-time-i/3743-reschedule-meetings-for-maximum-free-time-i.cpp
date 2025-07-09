class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int> freeArr;

        freeArr.push_back(startTime[0]);

        for(int i = 1; i<startTime.size(); i++){
            freeArr.push_back(startTime[i] - endTime[i-1]);
        }

        freeArr.push_back(eventTime - endTime[endTime.size() - 1]);

        //sliding window

        int i = 0;
        int j = 0;
        int mxsum = 0;
        int currsum = 0;
        int n = freeArr.size();

        while(j < n){
            currsum += freeArr[j];

            if(i < n && j-i+1 > k+1){
                currsum -= freeArr[i];
                i++;
            }

            mxsum = max(mxsum, currsum);
            j++;
        }

        return mxsum;
        
    }
};