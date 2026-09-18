class Solution {
    void recurse(vector<int>& cand, int &target,int start,vector<int> &currarray,vector<vector<int>> &ans,int &currsum){
        for(int i=start;i<cand.size();i++){
            
            if(i>start && cand[i]==cand[i-1]){
                continue;
            }
            if(currsum+cand[i]>target){
                break;
            }
            currsum+=cand[i];
            currarray.push_back(cand[i]);
            if(currsum==target){
                ans.push_back(currarray);
            }
            recurse(cand,target,i+1,currarray,ans,currsum);
            currsum-=cand[i];
            currarray.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        vector<vector<int>> ans;
        vector<int> currarray;
        int currsum=0;
        sort(cand.begin(),cand.end());
        for(int i=0;i<cand.size();i++){
            if(i>0 && cand[i]==cand[i-1]){
                continue;
            }
            if(currsum+cand[i]>target){
                break;
            }
            currsum+=cand[i];
            currarray.push_back(cand[i]);
            if(currsum==target){
                ans.push_back(currarray);
            }
            recurse(cand,target,i+1,currarray,ans,currsum);
            currsum-=cand[i];
            currarray.pop_back();
        }
        sort(ans.begin(),ans.end());
        auto last = unique(ans.begin(),ans.end());
        ans.erase(last,ans.end());
        return ans;

    }
};
