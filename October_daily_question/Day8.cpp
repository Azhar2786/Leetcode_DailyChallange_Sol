//! 1458. Max Dot Product of Two Subsequences


class Solution {
private:
    vector<vector<int>> dp;
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size();
        dp.resize(n, vector<int> (m, -1));
        return solve(n-1, m-1, nums1, nums2);
    }
    int solve(int i, int j, vector<int>& nums1, vector<int>& nums2){  
        if(i < 0 || j < 0) return INT_MIN;

        if(dp[i][j] != -1) return dp[i][j];

        //notTake
        int notTake = max(solve(i, j-1, nums1, nums2), solve(i-1, j, nums1, nums2));

        //take
        int prod = nums1[i]*nums2[j];
        int remProd = max(0, solve(i-1, j-1, nums1, nums2))
        int take = prod + remProd;

        return dp[i][j] = max(take, notTake);
    }
};