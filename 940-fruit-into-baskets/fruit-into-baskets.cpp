class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int,int>mp;
        int start=0, end=0;
        int count=0;

        while(end<n) {
            mp[fruits[end]]++;
            if(mp.size()<=2) {
                count = max(count,end-start+1);

            }
            else {
                mp[fruits[start]]--;

                if(mp[fruits[start]]==0) {
                mp.erase(fruits[start]);
                }
                start++;
            }
            end++;

        }
        return count;
    }
};