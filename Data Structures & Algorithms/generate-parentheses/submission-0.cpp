class Solution {
    void recurse(int n,vector<string> &ans,string &curr,int &opencount,int &closecount){
        if(opencount>0){
            opencount--;
            curr.push_back('(');
            recurse(n,ans,curr,opencount,closecount);
            opencount++;
            curr.pop_back();
        }
        else if(opencount-closecount==0){
            ans.push_back(curr);
        }
        if(opencount<closecount){
            closecount--;
            curr.push_back(')');
            recurse(n,ans,curr,opencount,closecount);
            closecount++;
            curr.pop_back();
        }
       
    }
public:
    vector<string> generateParenthesis(int n) {
        int opencount,closecount;
        opencount=n;
        closecount=n;
        string curr="";
        vector<string> ans;
        recurse(n,ans,curr,opencount,closecount);
        return ans;
        
    }
};
