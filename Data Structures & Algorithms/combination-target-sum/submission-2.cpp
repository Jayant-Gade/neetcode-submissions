

class Solution {
    void recurse(vector<int>& nums,int target,int & currsum,vector<vector<int>> &ans,vector<int> &currarray,int start){
        for(int i=start;i<nums.size();i++){
            if(currsum+nums[i]>target){
                continue;
            }
            currsum+=nums[i];
            currarray.push_back(nums[i]);
            if(currsum==target){
                ans.push_back(currarray);
            }
            recurse(nums,target,currsum,ans,currarray,i);
            currarray.pop_back();
            currsum-=nums[i];
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> currarray;
        int currsum=0;
        int start=0;
        for(int i=start;i<nums.size();i++){
            if(currsum+nums[i]>target){
                continue;
            }
            currsum+=nums[i];
            currarray.push_back(nums[i]);
            if(currsum==target){
                ans.push_back(currarray);
            }
            recurse(nums,target,currsum,ans,currarray,i);
            currarray.pop_back();
            currsum-=nums[i];
        }
        return ans;
    }
};
