class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        int tmp;
        for(int i=left;i<=right;i++){
            for(tmp=i;tmp!=0;tmp/=10){
                if(tmp%10==0)
                    break;
                if(i%(tmp%10)==0)
                    ;
                else
                    break;
                //last time
                if(tmp<10){
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};