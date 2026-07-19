class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0, maxsum = nums[0];

        for(int i=0; i<nums.size(); i++) {
            sum+=nums[i];

            maxsum = max(maxsum, sum);
        

        if(sum < 0) {                 //If the current subarray has a negative sum, don't continue it. Start a new subarray from the next element.
            sum=0;
        }
        }
        return maxsum;
    }
        
};
