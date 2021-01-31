class Solution
{
public:
    string getSmallestString(int n, int k)
    {

        string s = "";
        for (int i = 0; i < n; i++)
            s += 'a';
        int pos = n - 1;
        k -= n;
        while (k > 0)
        {
            s[pos] += min(25, k);
            k = k - min(25, k);
            pos--;
        }
        return s;
    }
};