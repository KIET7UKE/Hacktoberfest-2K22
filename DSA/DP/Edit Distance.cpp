class Solution {
public:
    int minDistance(string s, string t) {
        int n = s.size(), m = t.size();
        int dp[n + 1][m + 1];
        iota(dp[0], dp[0] + m + 1, 0);
        for (int j = 1; j <= n; ++j)
            dp[j][0] = j;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (s[i - 1] == t[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                else
                    dp[i][j] = 1 + min(dp[i - 1][j - 1], 
                                       min(dp[i][j - 1], dp[i - 1][j]));
            }
        }
        return dp[n][m];
    }
};
