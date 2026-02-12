class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size() < p.size()) return {};
        
        vector<int> si(26,0), pi(26,0);
        int right = 0, left = 0;
        
        // First window
        while(right < p.size()) {
            si[s[right] - 'a']++;
            pi[p[right] - 'a']++;
            right++;
        }
        
        vector<int> ans;
        
        while(right < s.size()) {
            
            if(si == pi)
                ans.push_back(left);
            
            // Slide window
            si[s[left] - 'a']--;
            left++;
            
            si[s[right] - 'a']++;
            right++;
        }
        
        // Last window check
        if(si == pi)
            ans.push_back(left);
        
        return ans;
    }
};
