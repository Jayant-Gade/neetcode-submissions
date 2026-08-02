class Solution {
    void trav(vector<vector<int>> &ans,vector<int> &curr,vector<int> &nums,int i,int &s){
        ans.push_back(curr);
        for(int j=i;j<s;j++){
            curr.push_back(nums[j]);
            trav(ans,curr,nums,j+1,s);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        int i=0;
        int s=nums.size();
        trav(ans,curr,nums,i,s);
        return ans;
    }
};
