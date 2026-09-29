class Solution {
    bool recurse(int point,string &s, vector<string>& dict,int dictp,vector<int>& memo){
        int dictt=0;
        int pointt=point;
        while(pointt<s.size() && dictt<dict[dictp].size()){
            if(s[pointt]!=dict[dictp][dictt]){
                return false;
            }
            pointt++;
            dictt++;
        }
        if (dictt < dict[dictp].size()) {
            return false;
        }
        if(pointt==s.size()){
            return true;
        }
        if (memo[pointt] != -1) {
            return memo[pointt];
        }
        for(int i=0;i<dict.size();i++){
            if(dict[i][0]==s[pointt]){
                if(recurse(pointt,s,dict,i,memo))
                {
                    return memo[pointt] = true;;
                }
            }
        }
        return memo[pointt] = false;
    }
public:
    bool wordBreak(string s, vector<string>& dict) {
        //sort(dict.begin(),dict.end());
        vector<int> memo(s.size(), -1);
        int point=0;
        int temp;
        bool ans=false;
        for(int i=0;i<dict.size();i++){
            if(dict[i][0]==s[0]){
                if(recurse(0,s,dict,i,memo)){
                    return true;
                }
            }
        }
        return ans;
    }
};
