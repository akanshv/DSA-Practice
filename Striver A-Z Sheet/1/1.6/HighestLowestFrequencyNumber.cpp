// https://leetcode.com/problems/frequency-of-the-most-frequent-element/

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int max = 1;
        long n = nums.size();

        for (long i=n-1;i>=0;i--){
            int tempk=k;
            long frequency = 1;
            for(long j=i-1;j>=0;j--){
                int diff = nums[i] - nums[j];
                if ( tempk >=  diff ){
                    frequency++;
                    tempk -= diff;
                }
                else
                    break;
            }
            if (frequency > max)
                max=frequency;
        }

        return max;
    }
};