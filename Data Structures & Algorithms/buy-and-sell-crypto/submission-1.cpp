class Solution {
public:
    int maxProfit(vector<int>& p) {
        int l=p[0];
        int r=p[0];
        int maxi=0;
        for(auto i:p){
            if(l>i){
                l=i;
                r=i;
            }
            else{
                maxi=max(maxi,max(r-l,i-l));
            }
        }
        return maxi;
    }
};
