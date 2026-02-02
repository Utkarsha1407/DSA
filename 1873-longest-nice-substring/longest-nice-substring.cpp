class Solution {
public:
    string longestNiceSubstring(string s) {
        if (s.size() < 2) return "";

        unordered_set<char> charSet(s.begin(), s.end());

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (charSet.count(tolower(c)) && charSet.count(toupper(c))) continue;

            // Split and recurse
            string left = longestNiceSubstring(s.substr(0, i));
            string right = longestNiceSubstring(s.substr(i + 1));
            return (left.size() >= right.size()) ? left : right;
        }
        return s; // Whole string is nice
    }
};
