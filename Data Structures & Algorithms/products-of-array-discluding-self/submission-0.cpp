class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        left[0]=1;
        right[0] = 1;
        for(int i=1;i<nums.size();i++){
            left[i]=left[i-1]*nums[i-1];
            right[i]=right[i-1]*nums[nums.size()-i];
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=left[i]*right[nums.size()-i-1];
        }
        return ans;


    }
};
