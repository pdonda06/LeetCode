class Solution 
{
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) 
    {
        long long sum1 = 0;
        long long sum2 = 0;
        int zero1 = 0;
        int zero2 = 0;

        // Step 1: Traverse nums1
        for(int i = 0; i < nums1.size(); i++) 
        {
            if(nums1[i] == 0) 
            {
                nums1[i] = 1;
                zero1++;
            }
            
            sum1 += nums1[i];
        }

        // Step 2: Traverse nums2
        for(int i = 0; i < nums2.size(); i++) 
        {
            if(nums2[i] == 0) 
            {
                nums2[i] = 1;
                zero2++;
            }
            
            sum2 += nums2[i];
        }

        // Step 3: Feasibility check
        if(sum1 < sum2 && zero1 == 0)
        {
            return -1;
        }

        if(sum2 < sum1 && zero2 == 0)
        {
            return -1;
        }

        // Step 4: Return the minimal equal sum
        return max(sum1, sum2);
    }
};