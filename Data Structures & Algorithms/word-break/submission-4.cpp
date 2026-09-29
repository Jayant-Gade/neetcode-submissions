class Solution {
public:
    bool wordBreak(string s, vector<string>& dict) {
        //sort(dict.begin(),dict.end());
        vector<int> memo(s.size()+1, false);
        memo[0]=true;
        int maxlen=0;
        for(auto c:dict){
            maxlen=max(maxlen,(int)c.size());
        }
        for(int i=0;i<s.size();i++){
            int left =i;
            while(left>=0 &&i-left<=maxlen){
                    if(memo[left]==true){
                if(find(dict.begin(),dict.end(),s.substr(left,i-left+1))!=dict.end()){
                        memo[i+1]=true;
                        break;
                    }
                }
                left--;
            }
        }
        return memo[s.size()];
    }
};
