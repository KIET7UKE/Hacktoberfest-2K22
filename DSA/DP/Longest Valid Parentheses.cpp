class Solution {
public:
    int longestValidParentheses(string str) {
        int n = str.size();
        int ans = 0, left = 0, right = 0;
        for (int i = 0; i < n; ++i) {
            if (str[i] == '(')
                left++;
            else
                right++;
            if (left == right)
                ans = max(ans, 2 * right);
            else if (right > left)
                right = left = 0;
        }
        left = right = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (str[i] == '(')
                left++;
            else
                right++;
            if (left == right)
                ans = max(ans, 2 * right);
            else if (right < left)
                right = left = 0;
        }
        return ans;
    }
};
