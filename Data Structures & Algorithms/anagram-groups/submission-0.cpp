class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> hash;
        for(auto i:strs){
            string t=i;
            sort(t.begin(),t.end());
            hash[t].push_back(i);
        }
        for(auto pair:hash){
            ans.push_back(pair.second);
        }
        return ans;

    }
};
