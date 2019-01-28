class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) //negative num
            return false;
        if(x>0 && x%10 == 0) //ends with zero
            return false;
        
        int reverse=0;
        int a = x;
        while(a >0){
            reverse *=10;
            reverse = reverse + a%10;
            a/=10;
        }
        if(reverse == x)
            return true;
        return false;
    }
};