746. Min Cost Climbing Stairs



class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        return solve(n,cost,dp);
    }
    int solve(int i,vector<int>&cost,vector<int>&dp)
    {
        if(i==0 || i==1)
            return cost[i];
        
        if(dp[i]!=-1) return dp[i];
        
        int mini= min(solve(i-1,cost,dp),solve(i-2,cost,dp));
        
        if(i!=cost.size())
            mini+=cost[i];
        
        return dp[i]= mini;
    }
};