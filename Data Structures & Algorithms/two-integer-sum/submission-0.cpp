class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        vector<int> soln;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(hash.find(target-nums[i])!=hash.end()){
                soln = {hash[(target-nums[i])],i};\
                return soln;
            }
            else{
                hash[nums[i]]=i;
            }
        }
    }
};
