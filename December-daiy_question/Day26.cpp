//! 1155. Number of Dice Rolls With Target Sum





class Solution {
public:
    long long int MOD = 1000000007;

    long long int solveUsingTopDown(int n, int k , int target,vector<vector<long long int>>&dp) {
        //base case
        if(n < 0)
            return 0;
        if(n == 0 && target == 0)
            return 1;
        if(n == 0 && target != 0) 
            return 0;
        if(n !=0 && target == 0)
            return 0;

        if(dp[n][target] != -1){
            return dp[n][target];
        }

        long long int ans = 0;
        for(int i=1; i<=k; i++) {
            long long int recAns = 0;
            if(target-i >=0 )
            recAns = solveUsingTopDown(n-1, k , target-i,dp);

            ans = (ans % MOD + recAns % MOD) % MOD;
        }
        dp[n][target] = ans;

        return dp[n][target];
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<long long int>>dp(n+1,vector<long long int>(target+1,-1));
         int ans = solveUsingTopDown(n,k,target,dp);
        return ans;
    }
};