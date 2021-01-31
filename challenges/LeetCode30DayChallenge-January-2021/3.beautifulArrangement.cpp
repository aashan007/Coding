class Solution
{
public:
    int count = 0;
    void dfs(int n, vector<int> &dp, int index)
    {
        if (index == n + 1)
        {
            count++;
        }
        for (int i = 1; i <= n; i++)
        {
            if ((i % index == 0 || index % i == 0) && !dp[i])
            {
                dp[i] = 1;
                dfs(n, dp, index + 1);
                dp[i] = 0;
            }
        }
    }
    int countArrangement(int n)
    {
        vector<int> dp(16, 0);
        dfs(n, dp, 1);
        return count;
    }
};