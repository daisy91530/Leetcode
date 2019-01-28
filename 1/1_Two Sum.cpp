class Solution {
public:
    // two sum =>O(nlogn)
    //map.find=>O(logn)
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        map<int, int>::iterator it;
        vector<int> ans(2);
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            it = hash.find(target-x);
            if(it==hash.end()){
                //doesn't find
                hash[x]= i;
            }else{
                //find in map
                ans[0]=it->second;
                ans[1]=i;
                return ans;
            }
                    
                
            
        }
    }
};