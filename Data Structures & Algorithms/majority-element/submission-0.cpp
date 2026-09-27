class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int currcount=0;
        int currelement;
        for(auto n:nums){
            if(currcount==0){
                currcount++;
                currelement=n;
            }
            else if(n!=currelement){
                currcount--;
            }
            else{
                currcount++;
            }
        }
        return currelement;
    }
};