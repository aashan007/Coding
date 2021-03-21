class Solution
{
public:
    vector<int> shortestToChar(string S, char C)
    {

        int len = S.length();
        std::vector<int> ans;
        ans.push_back(S[0] == C ? 0 : 10001);
        for (int i = 1; i < len; i++)
            ans.push_back(S[i] == C ? 0 : ans[i - 1] + 1);
        for (int i = len - 2; i >= 0; i--)
            ans[i] = min(ans[i], ans[i + 1] + 1);
        return ans;
    }
};