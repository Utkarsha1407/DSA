class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int count=0;

        while(n > 0) {
            int digit = n % 10;

            if(digit !=0 && num % digit == 0) {    //num bcz we have to check original number
                count++;
            }

            n = n/10;
        }
        return count;
    }
};