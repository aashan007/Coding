class Solution
{
public:
    int getMaximumGenerated(int n)
    {
        vector<int> res;
        if (n <= 1)
        {
            return n;
        }
        res.push_back(0);
        res.push_back(1);
        int j = 2;
        int maxRes = 1;
        while (j <= n)
        {
            if (j % 2 == 0)
            {
                int rem = j / 2;
                int temp = res[rem];
                maxRes = max(temp, maxRes);
                res.push_back(temp);
            }
            else
            {
                int rem = j / 2;
                int temp = res[rem] + res[rem + 1];
                maxRes = max(temp, maxRes);
                res.push_back(temp);
            }
            j++;
        }

        return maxRes;
    }
};