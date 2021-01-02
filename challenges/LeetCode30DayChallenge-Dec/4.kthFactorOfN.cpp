class Solution
{
public:
    int kthFactor(int n, int k)
    {
        int count = k;
        int currFactor = 1;
        for (int i = 1; i <= n; i++)
        {
            if (count == 0)
            {
                break;
            }
            if (n % i == 0)
            {
                currFactor = i;
                count--;
            }
        }

        if (count)
        {
            return -1;
        }
        return currFactor;
    }
};