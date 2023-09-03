// ques 62. unique path

class Solution {
public:
    int uniquePathsRecursive(int down, int right, int m, int n, vector<vector<int>>& dp) {
        if (down == m - 1 && right == n - 1) {
            return 1;
        }
        if (dp[down][right] != -1) {
            return dp[down][right];
        }
        int rightPaths = 0;
        int downPaths = 0;
        if (down < m - 1) {
            rightPaths = uniquePathsRecursive(down + 1, right, m, n, dp);
        }
        if (right < n - 1) {
            downPaths = uniquePathsRecursive(down, right + 1, m, n, dp);
        }
        dp[down][right] = rightPaths + downPaths;
        return dp[down][right];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return uniquePathsRecursive(0, 0, m, n, dp);
    }
};