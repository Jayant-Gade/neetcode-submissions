class Solution {
    void recurse(vector<int>& nums, vector<int> &curr,vector<vector<int>> &ans,int start){
        if(start==nums.size()){
            return;
        }
        for(int i=start;i<nums.size();i++){
            if (i > start && nums[i] == nums[i - 1]) continue;
            curr.push_back(nums[i]);
            ans.push_back(curr);
            recurse(nums,curr,ans,i+1);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr={};
        vector<int> comp;
        sort(nums.begin(),nums.end());
        ans.push_back(curr);
        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            curr.push_back(nums[i]);
            ans.push_back(curr);
            recurse(nums,curr,ans,i+1);
            curr.pop_back();
        }
        return ans;

    }
};
