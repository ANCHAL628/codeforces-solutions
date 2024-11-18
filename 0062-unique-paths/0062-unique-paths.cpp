class Solution {
private:
    int h(int i, int j, int m, int n, vector<vector<int>>& dp) {
        if (i == m - 1 || j == n - 1)
            return 1;
        if (dp[i][j] != -1)
            return dp[i][j];
        return dp[i][j] = h(i + 1, j, m, n, dp) + h(i, j + 1, m, n, dp);
    }

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return h(0, 0, m, n, dp);
    }
};
