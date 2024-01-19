//! 931. Minimum Falling Path Sum




class Solution {
public:
    vector<vector<long long>> dp;
    long long helper(int i,int j,vector<vector<int>>& matrix,int n){
        if(i<0 || j<0 || i>=n || j>=n){
            return INT_MAX;
        }
        if(i==n-1){
            return matrix[i][j];
        }
        if(dp[i][j]!=INT_MAX){
            return dp[i][j];
        }
        long long ans=INT_MAX;
        ans=min(ans,matrix[i][j]+helper(i+1,j-1,matrix,n));
        ans=min(ans,matrix[i][j]+helper(i+1,j,matrix,n));
        ans=min(ans,matrix[i][j]+helper(i+1,j+1,matrix,n));
        return dp[i][j]=ans;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        long long ans=INT_MAX;
        dp=vector<vector<long long>> (n+1,vector<long long> (n+1,INT_MAX));
        for(int i=0;i<matrix.size();i++){
            ans=min(ans,helper(0,i,matrix,n));
        }
        return ans;
    }
};