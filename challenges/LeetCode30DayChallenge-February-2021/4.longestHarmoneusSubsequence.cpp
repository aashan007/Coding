class Solution
{
public:
    int findLHS(vector<int> &nums)
    {
        int ans = 0;
        unordered_map<int, int> mp;
        for (auto i : nums)
            mp[i]++;
        for (auto &[m, n] : mp)
        {
            auto after = mp.find(m + 1);
            if (after != mp.end())
                ans = max(ans, n + after->second);
        }
        return ans;
    }
};