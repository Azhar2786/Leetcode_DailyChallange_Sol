70. Climbing Stairs






class Solution {
public:
 int findWays(int n){
         vector<int>dp(n+1,-1);
         dp[0] = 1;
         dp[1] = 1;
        if(n<=1){
            return dp[1];
        } //base case
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }

    int climbStairs(int n) {
       
        return findWays(n);
    }
};