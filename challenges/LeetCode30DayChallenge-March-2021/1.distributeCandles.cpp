class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        unordered_map<int, int> mp;

        for (int i : candyType)
        {
            mp[i]++;
        }

        int totalCandy = candyType.size() / 2;

        if (totalCandy < mp.size())
        {
            return totalCandy;
        }
        return mp.size();
    }
};
