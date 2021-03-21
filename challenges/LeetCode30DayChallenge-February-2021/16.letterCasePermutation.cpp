class Solution
{
public:
    vector<string> ans;
    int n;
    void recursion(string S, int pos)
    {
        if (pos == n) //Final state
        {
            ans.push_back(S);
        }
        else
        {
            if (S[pos] >= '0' && S[pos] <= '9')
            {
                recursion(S, pos + 1);
            }
            else
            {
                char lCase, uCase;
                if (S[pos] >= 'a' && S[pos] <= 'z')
                {

                    recursion(S, pos + 1);

                    lCase = S[pos];
                    uCase = (lCase - 'a') + 'A';
                    S[pos] = uCase;
                    recursion(S, pos + 1);
                    S[pos] = lCase;
                }
                else
                {

                    recursion(S, pos + 1);

                    uCase = S[pos];
                    lCase = (uCase - 'A') + 'a';
                    S[pos] = lCase;
                    recursion(S, pos + 1);
                    S[pos] = uCase;
                }
            }
        }
    }

    vector<string> letterCasePermutation(string S)
    {
        n = S.size();
        recursion(S, 0);
        return ans;
    }
};
