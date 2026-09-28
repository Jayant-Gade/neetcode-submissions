class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> seen;
        int count=0;
        if(k==0) return false;
        int size=nums.size();
        for(int i=0;i<size;i++){
            count++;
            if(seen.count(nums[i])){
                return true;
            }
            else if(count>k){
                count--;
                seen.erase(nums[i-k]);
            }
            seen.insert(nums[i]);
            
        }
        return false;
    }
};