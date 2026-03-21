class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq;
        int maxfreq = 0;
        int total = 0;

        for(int i=0; i<nums.size(); i++) {
            freq[nums[i]]++;

            int count = freq[nums[i]];

            if(count>maxfreq) {
                maxfreq = count;
                total = maxfreq;
            }
            else if(count == maxfreq) {
                total += maxfreq;
            }
        }
        return total;
    }
};