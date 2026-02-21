class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n,0);
        stack<int>s;
        
        for(int i=n-1; i>=0; i--)
        {
            while(!s.empty() && temperatures[s.top()] <= temperatures[i]) { //idhar while lagta hai galti se bhi for mt lagana
                s.pop();
            }
            if(!s.empty()) {
                ans[i] = s.top()-i;
            }
            else {
                ans[i] = 0;
            }
            s.push(i);
        }
        return ans;
    }
};