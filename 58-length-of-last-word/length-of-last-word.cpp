class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.size() - 1;
        int count = 0;

        // skip trailing spaces
        while(end >= 0 && s[end] == ' ') {
            end--;
        }

        // count last word
        while(end >= 0 && s[end] != ' ') {
            count++;
            end--;
        }

        return count;
    }
};