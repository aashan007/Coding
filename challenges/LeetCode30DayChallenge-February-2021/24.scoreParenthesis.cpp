class Solution
{
public:
    int scoreOfParentheses(string S)
    {

        int len = S.length(), pwr = 0, ans = 0;
        for (int i = 1; i < len; i++)
            if (S[i] == '(')
                pwr++;
            else if (S[i - 1] == '(')
                ans += 1 << pwr--;
            else
                pwr--;
        return ans;
    }
};