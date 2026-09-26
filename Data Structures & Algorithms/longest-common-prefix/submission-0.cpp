class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count=-1;
        bool exit=false;
        char match=' ';
        string ans="";
        for(int i=0;i<200;i++){
            if(exit){
                break;
            }
            if(strs[0].size()<=i){
                //exit=true;
                break;
            }
            else{
                match=strs[0][i];
            }
            for(auto s:strs){
                if(s.size()<=i || match != s[i]){
                    exit=true;
                    break;
                }
            }
            if(!exit){
                count++;
            }
            else{
                break;
            }
        }
        if(count!=-1){
            for(int i=0;i<=count;i++){
                ans+=strs[0][i];
            }
            return ans;
        }
        return "";
        
        
    }
};