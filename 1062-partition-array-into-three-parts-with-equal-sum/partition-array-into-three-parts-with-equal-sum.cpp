class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        
        int sum=0;
        int count=0;
        int total=0;

        //total calculate karo
        for(int i=0; i<arr.size(); i++) {
            total+= arr[i];
        }
        
         int equal = total / 3;

         for(int i=0; i<arr.size(); i++) {
           
            sum+= arr[i];
            

             if( total % 3 != 0) {
                return false;
             }

            else if(sum == equal) {
             count++;
             sum=0;
           }
    
        }
        if(count>=3) {
            return true;
        }
        else {
            return false;
        }
    }
       
     
       
    
};