

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<bool> count(256, 0);
        int first = 0, second = 0, len = 0;

        while (second < s.size()) {

            if (count[s[second]] == 0) {
                count[s[second]] = 1;
                second++;
            }

            else {
                count[s[first]] = 0;
                first++;
            }

            len = max(len, second - first);
        }

        return len;
    }
};