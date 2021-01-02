class Solution
{
public:
    int reachNumber(int target)
    {
        target = abs(target);
        int sum = 0, k = 0;
        while (sum < target)
        {
            k++;
            sum += k;
        }

        return (sum - target) % 2 == 0 ? k : k % 2 == 0 ? k + 1 : k + 2;
    }
};