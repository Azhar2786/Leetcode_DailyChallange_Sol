
1220. Count Vowels Permutation


class Solution {
    int MOD=1e9+7;
public:
    int countVowelPermutation(int n) {
        if (n<=2) return 5*n;
        long dp[5]{1, 1, 1, 1, 1};
        for (int i=2; i<=n; ++i) {
            long cur[5] = {0,0,0,0,0};
            cur[0] += dp[1];
            cur[1] += dp[0] + dp[2];
            cur[2] += dp[0] + dp[1] + dp[3] + dp[4];
            cur[3] += dp[2] + dp[4];
            cur[4] += dp[0];
            for (int j=0; j<5; ++j)
                dp[j] = cur[j] % MOD;
        }
        int ans{0};
        for (int j=0; j<5; ++j) {
            ans += dp[j];
            ans %= MOD;
        }
        return ans;
    }
};