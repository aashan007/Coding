class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string tmp1 = "", tmp2 = "";
        for (auto ch : word1)
            tmp1 += ch;
        for (auto ch : word2)
            tmp2 += ch;

        return tmp1 == tmp2;
    }
};