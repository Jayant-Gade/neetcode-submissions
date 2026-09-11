class Solution {
public:
    int characterReplacement(string s, int k) {
        int left,right,maxi,curr,unmatchcount;
        maxi=0;
        for(int i=0;i<26;i++){
            char c='A'+i;
            left=0;right=0;curr=0;unmatchcount=0;
            for(right=0;right<s.size();right++){
                if(s[right]!=c){
                    unmatchcount++;
                }
                if(unmatchcount>k){
                    if(s[left]==c && left<right){
                        while(s[left]==c){
                            left++;
                        }
                        left++;
                    }
                    else{
                        left++;
                    }
                    unmatchcount--;
                }
                maxi=max(maxi,right-left+1);
            }
        }
        return maxi;
    }
};
