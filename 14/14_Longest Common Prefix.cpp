class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        char temp;
        int flag=0;
        if(strs.empty())//won't exceed the border
            return s;
        if(strs.size()==1){//have only one string
            s = strs[0];
            return s;
        }
        for(int j=0;j<100;j++){//do 100 times, assume first string has 100 characters
            temp = strs[0][j];
            for(int i=1;i<strs.size();i++){
                if(strs[i][j] == temp)
                    ;
                else{
                    flag = 1;
                    break;
                }
                if(i == strs.size()-1){
                    s+=temp;
                }
            }
            if(flag==1){
                break;
            }
        }
        return s;
    }
};