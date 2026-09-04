class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int total=0, prefixsum=0, rem;
        mp[0]=1;

        for(int i=0; i<nums.size(); i++) {
            prefixsum+=nums[i];
            rem = prefixsum % k;

            if(rem<0)
            rem = rem+k;

            if(mp.count(rem)) {
                total+=mp[rem];
                mp[rem]++;
            }

            else {
                mp[rem]=1;
            }
        }
        return total;
    }
};