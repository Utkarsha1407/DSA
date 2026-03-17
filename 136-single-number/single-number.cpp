class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        
        for(int i=0; i<nums.size(); i++) {
            result = result ^ nums[i];        //Used x or  0 0 1   1 1 0   1 0 1   0 1 1
        }                                     // 2 ^ 2    10+10= 00 0 +1 = 1
        return result;
    }
};