class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        if(nums.size()==0) {
            return 0;
        }
        for(int j=1; j<nums.size(); j++) {
            if(nums[i] != nums[j]) {     //agar i is not equal to k i++ and nums[i]=nums[j] else j++
                i++;
                nums[i]=nums[j];
            }
           
        }
        return i+1;
    }
};