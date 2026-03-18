class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int, int> freq;

        // Step 1: count frequency
        for(int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }

        // Step 2: find first unique character
        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};