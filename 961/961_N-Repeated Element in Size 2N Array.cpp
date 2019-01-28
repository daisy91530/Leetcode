class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int n= A.size()/2;
        vector<int> B;
        //find those unique elements
        sort(A.begin(), A.end());
        for(int i=0;i<A.size();i++){
            B.push_back(A[i]);
        }
        vector<int>::iterator iter = unique(B.begin(), B.end());
        B.resize(distance(B.begin(), iter));
        //find the max freq num
        int max;
        for(int i=0;;i++){
            max = count(A.begin(), A.end(), B[i]);
            if(max == n){
                return B[i];
            }
        }
    }
};