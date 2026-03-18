class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>freq;
        
        if(t.size()<s.size()) return false;
        for(int i=0; i<s.size(); i++) {
           freq[s[i]]++;
        }
        for(int i=0; i<t.size(); i++) {
            freq[t[i]]--;
        
         if(freq[t[i]] < 0) {
            return false;
        }
        }
        return true;
    }
};