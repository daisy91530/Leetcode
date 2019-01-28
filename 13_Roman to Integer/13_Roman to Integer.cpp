class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for(int i=s.length();i>=0;i--){
            if(s[i]=='I'){
                sum+=1;
            }else if(s[i]=='V'){
                if(s[i-1]=='I'){
                    sum+=4;
                    i--;
                }else{
                    sum+=5;
                }
            }else if(s[i]=='X'){
                if(s[i-1]=='I'){
                    sum+=9;
                    i--; //jump to the character before I
                }else{
                    sum+=10;
                }
            }else if(s[i]=='L'){
                if(s[i-1]=='X'){
                    sum+=40;
                    i--;
                }else{
                    sum+=50;
                }
            }else if(s[i]=='C'){
                if(s[i-1]=='X'){
                    sum+=90;
                    i--;
                }else{
                    sum+=100;
                }
            }else if(s[i]=='D'){
                if(s[i-1]=='C'){
                    sum+=400;
                    i--;
                }else{
                    sum+=500;
                }
            }else if(s[i]=='M'){
                if(s[i-1]=='C'){
                    sum+=900;
                    i--;
                }else{
                    sum+=1000;
                }
            }
        }
        return sum;
    }
};