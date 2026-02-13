class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int start=0, end=0, n=fruits.size(), count=0;
        unordered_map<int,int>mp;
        while(end<n)
        {
           mp[fruits[end]]++;
           if(mp.size()<=2)
           {
            count=max(count,end-start+1);
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