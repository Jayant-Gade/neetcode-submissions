class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int l=0,r=num.size()-1;
        vector<int> ans(2);
        while(l<r){
            if(num[l]+num[r]==target){
                ans[0]=l+1;ans[1]=r+1;
                break;
            }
            else if(num[l]+num[r]<target){
                l++;
            }
            else{
                r--;
            }

        }

        return ans;
    }
};
