class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;

        vector<int>s1i(26,0), s2i(26,0);
        for(int i=0; i<s1.size(); i++) {
            s1i[s1[i]-'a']++;
            s2i[s2[i]-'a']++;
        }
        if(s1i == s2i) {
            return true;
        }

        //another condition

        for(int i=s1.size(); i<s2.size(); i++) {
            s2i[s2[i]-'a']++;   //add new char
            s2i[s2[i-s1.size()]-'a']--;
            if(s1i == s2i) {
                return true;
            }
        }
        return false;
    }
};