class Solution {
public:
    int trap(vector<int>& h) {
        int left,right,middle,sum;
        sum=0;
        left=0;
        int n=h.size();
        right=n-1;
        int temp=0;
        /*while(left<n-1 && h[left] <= h[left+1]){
            left++;
        }
        while(right>left-1 && h[right]>=h[right-1]){
            right--;
        }*/
        while(left<right-1){
            if(h[left]<h[right]){
                temp=left+1;
                while(h[left]>h[temp] && temp<right){
                    sum+=h[left]-h[temp];
                    temp++;
                }
                left=temp;
            }
            else{
                temp=right-1;
                while(h[right]>h[temp] && temp>left){
                    sum+=h[right]-h[temp];
                    temp--;
                }
                right=temp;
                
            }
        }
        return sum;
    }
};
