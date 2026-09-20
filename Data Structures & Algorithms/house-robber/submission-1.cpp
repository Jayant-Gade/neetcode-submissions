class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp;
        if(nums.size()==1) return nums[0];
        dp.push_back(nums[0]);
        if(nums.size()==2) return max(nums[0],nums[1]);
        dp.push_back(max(nums[0],nums[1]));
        for(int i=2;i<nums.size();i++){
            if(nums[i]+dp[i-2]>dp[i-1]){
                dp.push_back(nums[i]+dp[i-2]);
            }
            else{
                dp.push_back(dp[i-1]);
            }
        }
        return max(dp[nums.size()-1],dp[nums.size()-2]);
    }
};
