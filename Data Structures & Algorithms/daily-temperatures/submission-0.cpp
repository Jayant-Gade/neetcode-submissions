class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        vector<int> ans(temps.size(),0);
        stack<int> stk,temp;
        stk.push(0);
        int count=0;
        for(int i=1;i<temps.size();i++){
            while(!stk.empty() &&temps[i]>temps[stk.top()]){
                ans[stk.top()]=i-stk.top();
                stk.pop();
            }
            stk.push(i);

        }
        
        return ans;
    }
};
