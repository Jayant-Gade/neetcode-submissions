class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,m=0;
        set<int> seen;
        while(right<s.size()){
            if (seen.count(s[right])==0){
                seen.insert(s[right]);
                right++;
            }
            else{
                while(s[left]!=s[right]){
                    seen.erase(s[left]);
                    left++;
                }
                seen.erase(s[left]);
                left++;
            }
            m=max(m,right-left);
        }
        return m;
    }
};
