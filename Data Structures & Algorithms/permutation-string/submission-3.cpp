class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left,right;
        left=0;
        right=0;
        map<char,int> seen,total;
        if(s1.size()>s2.size()){
            return false;
        }
        for(int i=0;i<26;i++){
            char c='a'+i;
            seen[c]=0;
            total[c]=0;
        }
        for(auto c:s1){
            total[c]++;
        }
        for(right=0;right<s2.size();right++){
            char temp=s2[right];
            seen[temp]++;
            
            
            if(right-left+1>s1.size()){
                seen[s2[left]]--;
                left++;
            }
            if(seen==total){
                return true;
            }
        }
        return false;
    }
};
