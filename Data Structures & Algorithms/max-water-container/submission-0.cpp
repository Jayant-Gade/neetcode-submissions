class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxvol=0;
        int l=0;
        int r=h.size()-1;
        while(l<r){
            maxvol=max(maxvol,(min(h[r],h[l])*(r-l)));
            if(h[l]<h[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxvol;
    }
};
