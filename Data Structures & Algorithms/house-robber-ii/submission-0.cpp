class Solution {
    int recurse(vector<int>& nums,int start,int end){
        int prev1=0;
        int prev2=0;
        for(int i=start;i<end;i++){
            int current=max(prev2+nums[i],prev1);
            prev2=prev1;
            prev1=current;
        }
        return prev1;
    }
public:
    int rob(vector<int>& nums) {
        vector<int> dp;
        int size=nums.size();
        if(size==1) return nums[0];
        if(size==2) return max(nums[0],nums[1]);
        
        return max(recurse(nums,0,size-1),recurse(nums,1,size));

    }
};
