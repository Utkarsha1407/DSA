class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int start=0, end=0;
        int sum =0;
        int minlenwindow= INT_MAX;

        while(end < n) {
           sum += nums[end];

        while(sum >= target) {
        
           minlenwindow = min(minlenwindow, end-start+1);

            sum -= nums[start];
            start++;
           } 
          end++;
           
        }

        if(minlenwindow == INT_MAX) {
            return 0;
        }
        return minlenwindow;
        }
       
    
};