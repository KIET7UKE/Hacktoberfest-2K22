class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n = a.size();
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = -1e9;
        for (int i = 0; i < n; ++i) {
            auto it = lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
            dp[it] = min(dp[it], a[i]);
        }
        for (int i = n; i >= 0; --i) {
            if (dp[i] != INT_MAX)
                return i;
        }
        return -1;
    }
};
