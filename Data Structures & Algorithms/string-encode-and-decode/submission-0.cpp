class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto i:strs){
            
            ans=ans+to_string(i.size())+"#"+i;
        }
        return ans;

    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp="",t2="";
        int len,count,i=0;
        while(i<s.size()){
            t2="";
            while(s[i]!='#'){
                t2+=s[i];
                i++;
            }
            len=stoi(t2);
            count=i+len+1;
            i++;
            temp="";
            while(i<count){
                temp+=s[i];
                i++;
            }
            ans.push_back(temp);
        }
        return ans;

    }
};
