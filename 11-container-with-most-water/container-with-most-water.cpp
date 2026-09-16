class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right = height.size()-1, maxwater=0;
         while(left<right) {
        int width = right - left;
        int length = min(height[right], height[left]);
         maxwater = max(maxwater, length*width);

       
            if(height[left] < height[right]) 
            left++;

            else
            right--;
        }
        return maxwater;
    }
};