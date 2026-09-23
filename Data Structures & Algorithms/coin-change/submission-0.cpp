class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+2,amount+2);
        int left=0;
        int currsum;
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            currsum=INT_MAX;
            for(auto c:coins){
                if(i>=c){
                    dp[i] = min(dp[i], dp[i - c] + 1);
                    
                }
            }
        }
        return dp[amount]>amount?-1:dp[amount];
    }
};
