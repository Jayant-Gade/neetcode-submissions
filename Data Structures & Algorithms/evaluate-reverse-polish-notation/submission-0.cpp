class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int ans;
        for(auto i:tokens){
            if(i=="+"){
                ans=stk.top();
                stk.pop();
                ans+=stk.top();
                stk.pop();
                stk.push(ans);
            }
            else if(i=="-"){
                ans=stk.top();
                stk.pop();
                ans=stk.top()-ans;
                stk.pop();
                stk.push(ans);
            }
            else if(i=="*"){
                ans=stk.top();
                stk.pop();
                ans*=stk.top();
                stk.pop();
                stk.push(ans);
            }
            else if(i=="/"){
                ans=stk.top();
                stk.pop();
                ans=stk.top()/ans;
                stk.pop();
                stk.push(ans);
            }
            else{
                stk.push(stoi(i));
            }
        }
        return stk.top();
    }
};
