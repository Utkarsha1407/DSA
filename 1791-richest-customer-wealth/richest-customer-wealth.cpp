class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth = 0;
        
        int rows= accounts.size();
        int cols = accounts[0].size();
        for(int i=0; i<rows; i++) {
           int wealth =0;
           for(int j=0; j<cols; j++) {
            wealth+=accounts[i][j];
           } 
           maxwealth = max(maxwealth,wealth);
        }
        return maxwealth;
    }
};