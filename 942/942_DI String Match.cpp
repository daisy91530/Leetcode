class Solution {
public:
    vector<int> diStringMatch(string S) {
        int N = S.length(), min=0;
        vector<int> ans;
        for(int i=0;i<=S.length();i++){
            if(S[i]=='I'){//chose min that hasn't choose
                ans.push_back(min++);
            }else{//chose max that hasn't choose
                ans.push_back(N--);
            }
        }
        return ans;
    }
};