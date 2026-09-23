class Solution {
    int recurse(string &s,int left,int right){
        int count=0;
        while(left>=0 && right<s.size()){
            if(s[left]==s[right]){
                count+=2;
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
    string longestPalindrome(string s) {
        int count=0;
        int maxi=0;
        int leftmx=0;
        int rightmx=0;
        int left=0;
        int right=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            left=i-1;
            right=i+1;
            int odd,even;
            odd=recurse(s,left,right);
            even = recurse(s,left+1,right);
            int currmax=max(odd+1,even);
            if(currmax>maxi){
                leftmx=i-(currmax-1)/2;
                maxi=currmax;
            }
        }
        return s.substr(leftmx,maxi);
        
    }
};
