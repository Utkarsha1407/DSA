class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start=0, end=0, count=0;
        int product = 1;
        int n = nums.size();

           for(int i=0; i<n; i++) {
            product*=nums[i];

             while(product>=k && start<=end)  {
               
                    product/=nums[start];
                    start++;
                }
                count+=(end-start)+1;
                end++;
             }
        
        return count;
    }
};