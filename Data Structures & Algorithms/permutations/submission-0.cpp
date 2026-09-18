class Solution {
    void recurse(vector<int>& nums,int start,vector<vector<int>> &ans,vector<int> &currarray,set<int> &seen){
        if(currarray.size()==nums.size()){
            ans.push_back(currarray);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(seen.count(nums[i])==0){
                seen.insert(nums[i]);
                currarray.push_back(nums[i]);
                recurse(nums,i+1,ans,currarray,seen);
                currarray.pop_back();
                seen.erase(nums[i]);
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> currarray;
        vector<vector<int>> ans;
        set<int> seen;
        for(int i=0;i<nums.size();i++){
            if(seen.count(nums[i])==0){
                seen.insert(nums[i]);
                currarray.push_back(nums[i]);
                recurse(nums,i+1,ans,currarray,seen);
                currarray.pop_back();
                seen.erase(nums[i]);
            }
        }
        return ans;
        
    }
};
