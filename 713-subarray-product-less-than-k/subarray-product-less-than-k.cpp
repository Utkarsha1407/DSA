class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start=0, end=0, product=1,n=nums.size(), count=0;
        while(end<n)
        {
            product *= nums[end];
    
        while(product>=k && start<=end)
        {
            //product k se chota hona chahiye
               product/=nums[start];
               start++;
        } 
            count+= (end-start)+1;
            end++;
        }
        return count;
    }

};