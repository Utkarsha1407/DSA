class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return {};

        sort(strs.begin(), strs.end());     //sort thestring and compare first and last word

        string first = strs[0];
        string last = strs.back();
 
       int i=0;
       while(i<first.size() && i<last.size() && first[i]==last[i]) {
        i++;
       }
       return first.substr(0,i);
    }
};