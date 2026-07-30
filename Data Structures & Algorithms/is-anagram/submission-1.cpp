class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int> hash;
        if(s.size()!=t.size()){
            return false;
        }
        for (auto ch:s){
            hash[ch]++;
        }
        for(auto ch:t){
            hash[ch]--;
            if(hash[ch]<0){
                return false;
            } 
        }
        return true;
    }
};
