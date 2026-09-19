class Solution {
    vector<string> temp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void recurse(vector<string> &ans,int &curr,string &digits,string &currstring){
        if(curr==digits.size()) {
            ans.push_back(currstring);
            return;
        };
        for(auto c:temp[digits[curr]-'0']){
            currstring.push_back(c);
            recurse(ans,++curr,digits,currstring);
            curr--;
            currstring.pop_back();
        }
        

    }
    
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int curr=0;
        int size=ans.size();
        string currstring="";
        if(digits.size()==0){
            return ans;
        }
        recurse(ans,curr,digits,currstring);
        return ans;
    }
};
