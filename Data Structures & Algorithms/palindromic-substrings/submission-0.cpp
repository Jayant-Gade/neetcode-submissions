class Solution {
    int recurse(string &s,int left,int right){
        int count=0;
        while(left>=0 && right<s.size()){
            if(s[left]==s[right]){
                count+=1;
                left--;
                right++;
            }
            else{
                return count;
            }
        }
        return count;
    }
public:
    int countSubstrings(string s) {
        int maxi=0;
        int total=0;
        int currmax=0;
        for(int i=0;i<s.size();i++){
            maxi+=recurse(s,i,i+1);
            maxi+=recurse(s,i-1,i+1);
        }
        maxi+=s.size();
        return maxi;
    }
};
