class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0; i<k; i++)
        sum+=nums[i];
        int maxsum = sum;
        int start=0, end=k;
        while(end<nums.size())
        {
         sum-=nums[start];
         sum+=nums[end];
         maxsum = max(sum,maxsum);
         start++;
         end++;
        }        
        return (double)maxsum/k;
    }
};