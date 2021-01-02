class Solution
{
public:
    vector<vector<string>> result;
    bool isPalindrome(string &str)
    {
        int n = str.size();
        for (int i = 0; i <= str.size() / 2; i++)
        {
            if (str[i] != str[n - 1 - i])
            {
                return false;
            }
        }
        return true;
    }

    void dfs(string &s, vector<string> temp, int pos)
    {
        if (s.size() == pos)
        {
            result.push_back(temp);
            return;
        }
        for (int i = pos; i < s.size(); i++)
        {
            string tmp = s.substr(pos, i + 1 - pos);
            //   cout<<tmp<<endl;
            if (isPalindrome(tmp))
            {
                temp.push_back(tmp);
                dfs(s, temp, i + 1);
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {

        vector<string> temp;
        dfs(s, temp, 0);

        return result;
    }
};