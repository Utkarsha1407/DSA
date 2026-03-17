class Solution {
public:
    int reverse(int x) {
       int rev = 0;
       while(x!=0) {
        int digit = x %10;                // 123%10 = 3   12 %10 =2
        x = x/10;                         // 123/10 = 12   12/10 = 1

        if(rev > INT_MAX/10 || rev < INT_MIN/10) 
            return 0;
        rev = rev*10+digit;               // 3           3*10+2 = 32
       } 
       return rev;
    }
};