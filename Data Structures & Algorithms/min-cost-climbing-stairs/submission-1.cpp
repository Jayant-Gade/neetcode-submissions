class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int s = cost.size();
        vector<int> dp(s+1,0);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<s;i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[s-1],dp[s-2]);



    }
};
