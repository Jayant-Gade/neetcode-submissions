class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> maxdp(nums.size()+2),mindp(nums.size()+2);
        int maxi=nums[0] , mini=nums[0];
        maxdp[0]=nums[0];
        mindp[0]=nums[0];
        for(int i = 1;i<nums.size();i++){
            maxi=max({maxi,maxdp[i-1]*nums[i],mindp[i-1]*nums[i],nums[i]});
            maxdp[i]=max({maxdp[i-1]*nums[i],mindp[i-1]*nums[i],nums[i]});
            mindp[i]=min({mindp[i-1]*nums[i],maxdp[i-1]*nums[i],nums[i]});
        }
        return maxi;

    }
};
