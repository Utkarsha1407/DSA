class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size(), sum=0, rem;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            rem = sum % k;
            //check number pehle map me dekha hai kya
            if(mp.find(rem) != mp.end())
            {
                if(i-mp[rem]>=2)
                return true;
            }
            else {
                mp[rem]=i; //agar pehle nhi dekha hai map me to use dal do map me
            }
        }
        return false;
    }
};