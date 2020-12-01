class Solution
{
public:
    int smallestRepunitDivByK(int K)
    {

        if (K == 2 && K == 5)
        {
            return -1;
        }

        int prev = 0;

        for (int i = 1; i <= K; i++)
        {
            prev = (prev * 10 + 1) % K;
            if (prev == 0)
            {
                return i;
            }
        }

        return -1;
    }
};