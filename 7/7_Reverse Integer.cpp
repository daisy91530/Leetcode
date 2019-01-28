class Solution {
public:
    int reverse(int x) {
        int sum;
        
        if(x<0){
            //need to plus minus
            x=x*(-1);
            sum = 0;
            while(x>0){
                if (abs(sum) > 214748364) return 0;
                int num1 = x%10;
                sum = sum*10 + num1;
                x = x/10;
            }
            return sum*(-1);
        }else{
            sum = 0;
            while(x>0){
                if (abs(sum) > 214748364) return 0;
                int num1 = x%10;
                sum = sum*10 + num1;
                x = x/10;
            }
            return sum;
        }
    
        
    }
};