class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        int maxi=0;
        for(auto i:nums){
            seen.insert(i);
        }
        for(auto i:seen){
            int x=1;
            if(!seen.contains(i+1)){
                while(seen.contains(i-x)){
                    x++;
                }
            }
            maxi=max(maxi,x);
        }
        return maxi;
    }
};
