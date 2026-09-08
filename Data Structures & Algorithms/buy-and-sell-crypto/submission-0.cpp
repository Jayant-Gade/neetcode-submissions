class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini=p[0];
        int maxi=0;
        for(auto i:p){
            if(mini>i){
                mini=min(i,mini);
            }
            else{
                maxi=max(i-mini,maxi);
            }
        }
        return maxi;
    }
};
