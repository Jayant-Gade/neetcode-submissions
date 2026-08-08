class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> hash(2002,0),ans;
        vector<vector<int>> count(nums.size()+2);
        for(auto i:nums){
            hash[1000+i]++;
        }
        for(int i=0;i<2002;i++){
            count[hash[i]].push_back(i-1000);
        }
        int i=nums.size()+1,c=0;
        while(c<k){
            while(count[i].size()==0 && i>0){
                i--;
            }
            for(auto j:count[i]){
                c++;
                ans.push_back(j);
                if(c==k){
                    i--;
                    break;
                }
            }

            i--;
        }
        return ans;
    }
};
