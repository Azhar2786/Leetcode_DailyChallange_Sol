1335. Minimum Difficulty of a Job Schedule



class Solution {
public:
    int minDifficulty(vector<int>& jobs, int d) {
        int n = jobs.size();
        if (d > n) return -1;
        

        vector<vector<int>> dp(n + 1, vector<int>(d + 1, 1e5));
        dp[0][0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int day = 1; day <= d; day++) {
                
                int maxi = INT_MIN; 
                for (int t = i; t >= 1; t--) {
                    maxi = max(maxi, jobs[t - 1]); 
                    dp[i][day] = min(dp[i][day], maxi + dp[t - 1][day - 1]);
                }
            }
        }
        return dp[n][d] ;
    }
};