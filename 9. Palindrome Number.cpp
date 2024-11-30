class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        if(x<0){
            return 0;
        }
        else{
        int n=x;
        while(n>0){
            int digit=n%10;
            n/=10;
           
            if(rev>(INT_MAX-digit)/10){
                return 0;
            }
            rev=(rev*10)+digit;
        }
        }
        bool result=(rev==x)?true:false;
        return result;
    }
};
