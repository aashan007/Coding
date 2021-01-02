class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> dp(10001, 0);

        for (int i = 0; i < nums.size(); i++)
        {
            dp[abs(nums[i])]++;
        }
        vector<int> result;

        for (int i = 0; i <= 10000; i++)
        {
            if (dp[i])
            {
                cout << i << " " << dp[i] << endl;
                while (dp[i]--)
                {
                    int temp = i * i;
                    result.push_back(temp);
                }
            }
        }

        return result;
    }
};