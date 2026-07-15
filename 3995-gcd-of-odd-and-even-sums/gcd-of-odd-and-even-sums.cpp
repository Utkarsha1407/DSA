class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        int sumodd,sumeven;

        sumodd = n*n;
        sumeven = n*(n+1);

       return sumeven - sumodd;
        }
    
};