class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> seen;
        int count=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(seen.count(nums[i])){
                return true;
            }
            else{
                seen.insert(nums[i]);
                count++;
            }
            if(count>k){
                count--;
                seen.erase(nums[i-k]);
            }
        }
        return false;
    }
};