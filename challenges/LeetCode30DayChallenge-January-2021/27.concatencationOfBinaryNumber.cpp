class Solution
{
public:
#define mod 1000000007

    long long binPow(long long a, long long b)
    {
        long long ans = 1;
        while (b > 0)
        {
            if (b % 2)
            {
                ans = (ans * a) % mod;
            }
            a = (a * a) % mod;
            b >>= 1;
        }

        return ans;
    }
    int concatenatedBinary(int n)
    {
        long long ans = 0;

        for (int i = 1; i <= n; i++)
        {
            long long shift = log2(i);

            ans = (ans * binPow(2, shift + 1) % mod + i) % mod;
        }

        return int(ans);
    }
};