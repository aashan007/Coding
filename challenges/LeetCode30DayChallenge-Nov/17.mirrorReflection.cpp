class Solution
{
public:
    int mirrorReflection(int p, int q)
    {
        if (q == 0)
            return 0;

        int cp = 0;
        bool up = false;

        do
        {
            up = !up;
            cp += p;
        } while (cp % q > 0);

        if (up)
            return (cp / q) % 2 == 0 ? 2 : 1;
        else
            return 0;
    }
};