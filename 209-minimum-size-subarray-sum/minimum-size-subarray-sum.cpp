class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlenwindow=INT_MAX, sum=0, start=0, end=0;
        while(end<nums.size())
        {
            sum+=nums[end];
            
            while(sum>=target)
            {
                
                minlenwindow = min(minlenwindow,end-start+1);
                sum-=nums[start];
                start++;
            }
            end++;
        }
        if(minlenwindow==INT_MAX) {
            return 0;
        }
        return minlenwindow;
    }
};