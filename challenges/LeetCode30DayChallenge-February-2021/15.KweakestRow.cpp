class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int> > &mat, int k)
    {
        vector<pair<int, int> > store;

        for (int i = 0; i < mat.size(); i++)
        {
            int snum = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1)
                    snum += 1;
            }
            store.push_back({i, snum});
        }

        sort(store.begin(), store.end(), [](pair<int, int> a, pair<int, int> b) -> bool {
            if (a.second == b.second)
            {
                return a.first < b.first;
            }
            return a.second < b.second;
        });

        vector<int> res;
        int i = 0;
        while (i != k)
        {
            res.push_back(store[i].first);
            i++;
        }

        return res;
    }
};