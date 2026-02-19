class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int mincap=0;
        int maxcap=0;
        for(int i=0; i<weights.size(); i++) {
            if(weights[i]>mincap) {
            mincap= max(mincap,weights[i]);
        }
        maxcap += weights[i];
    }
        while(mincap < maxcap)
    {
     int mid = mincap + (maxcap-mincap)/2;
     int requiredays=1;
     int currentload = 0;
     for(int i=0; i<weights.size(); i++ ) {
     if(currentload +weights[i] > mid) {
        requiredays++;
        currentload=0;
     }
     currentload += weights[i];
    }
    if(requiredays > days) {
        mincap = mid+1;
    }
    else {
        maxcap = mid;
    }
    }
     return mincap;
    }
    
    
};
