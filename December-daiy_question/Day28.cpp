//! 1531. String Compression II




class Solution {
public:
    int getLengthOfOptimalCompression(std::string s, int k) {
        n = s.length();
        dp = std::vector<std::vector<int>>(n, std::vector<int>(k + 1, -1));
        return helper(0, k, s);
    }

private:
    std::vector<std::vector<int>> dp;
    int n;

    int helper(int i, int k, const std::string& s) {
        if (k < 0) return n;
        if (n <= i + k) return 0;

        int& ans = dp[i][k];
        if (ans != -1) return ans;
        ans = helper(i + 1, k - 1, s);
        int length = 0, same = 0, diff = 0;

        for (int j = i; j < n && diff <= k; j++) {
            if (s[j] == s[i]) {
                same++;
                if (same <= 2 || same == 10 || same == 100) length++;
            } else {
                diff++;
            }
            ans = std::min(ans, length + helper(j + 1, k - diff, s));
        }
        return ans;
    }
};