class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int count = 0;

        for (int i = 0; i < flowerbed.size(); i++)
        {
            int prev = -1;
            int next = -1;
            if (flowerbed[i] == 0)
            {
                if (i == 0)
                {
                    prev = 0;
                }
                else
                {
                    if (flowerbed[i - 1])
                    {
                        prev = 1;
                    }
                    else
                    {
                        prev = 0;
                    }
                }
                if (i == flowerbed.size() - 1)
                {
                    next = 0;
                }
                else
                {
                    if (flowerbed[i + 1])
                    {
                        next = 1;
                    }
                    else
                    {
                        next = 0;
                    }
                }
                if (prev == 0 && next == 0)
                {
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }

        return count >= n;
    }
};