class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int i=0,j=0;
        int row=m[0].size(),col=m.size();
        while(j<col-1){
            if(m[j][i]==target){
                return true;
            }
            else if(m[j+1][i]<=target){
                j++;
            }
            else{
                break;
            }
        }
        
       
        while(i<row-1){
            if(m[j][i]==target){
                return true;
            }
            else if(m[j][i+1]<=target){
                i++;
            }
            else{
                break;
            }
        }
        if(m[j][i]==target){
                return true;
            }
        else{
                return false;
        }

    }
};
