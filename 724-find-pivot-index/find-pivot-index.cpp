class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int totalSum = 0;

        // Step 1: calculate total sum
        for (int i = 0; i < nums.size(); i++) {
            totalSum = totalSum + nums[i];
        }

        int leftSum = 0;

        // Step 2: check pivot index
        for (int i = 0; i < nums.size(); i++) {

            int rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }

            leftSum = leftSum + nums[i];
        }

        return -1;
    }
};
