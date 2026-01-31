class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0, end = letters.size() - 1;
        char ans = letters[0];  // default for wrap-around

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(letters[mid] > target) {
                ans = letters[mid];   // possible answer
                end = mid - 1;        // look for smaller valid
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};
