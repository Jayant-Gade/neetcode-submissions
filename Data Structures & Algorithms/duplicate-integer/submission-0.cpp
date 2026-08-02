class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mem;
        for (auto num:nums){
            if(mem.find(num)==mem.end()){
                mem.insert(num);
            }
            else{
                return true;
            }
        }
        return false;
    }
};