class Solution {
    void merge_sort(int left,int right,vector<int>& nums){
        if(left<right){
            int mid=((right+left)/2);
            merge_sort(left,mid,nums);
            merge_sort(mid+1,right,nums);
            merge(left,right,mid,nums);
        }
    }
    void merge(int left,int right,int mid,vector<int>& nums){
        int leftp=left;
        int midp=mid+1;
        int replacep=0;
        vector<int> tempa(right-left+1);
        while(leftp<=mid && midp<=right){
            if(nums[leftp]<=nums[midp]){
                tempa[replacep] = nums[leftp];
                leftp++;
            }
            else{
                tempa[replacep]=nums[midp];
                midp++;
            }
            replacep++;
        }
        while(leftp<=mid){
            tempa[replacep]=nums[leftp];
            leftp++;
            replacep++;
        }
        while(midp<=right){
            tempa[replacep]=nums[midp];
            midp++;
            replacep++;
        }
        for(int i=0;i<right-left+1;i++){
            nums[i+left]=tempa[i];
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        int mid=nums.size()/2;
        merge_sort(0,nums.size()-1,nums);
        return nums;
    }
};