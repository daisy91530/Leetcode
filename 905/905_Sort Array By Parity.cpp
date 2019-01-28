class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> B;
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0){//even, put front
                B.insert(B.begin(), A[i]);
            }else{//odd, put back
                B.push_back(A[i]);
            }
        }
        return B;
    }
};