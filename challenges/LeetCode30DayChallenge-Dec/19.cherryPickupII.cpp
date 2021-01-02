class Solution
{
    vector<int> dirs = {-1, 0, 1};

public:
    int cherryPickup(vector<vector<int>> &grid)
    {
        vector<vector<vector<int>>> memo(grid.size(), vector<vector<int>>(grid[0].size(), vector<int>(grid[0].size(), -1)));

        return getMaxCherries(grid, memo, 0, 0, grid[0].size() - 1);
    }

    int getMaxCherries(vector<vector<int>> &grid, vector<vector<vector<int>>> &memo, int i, int j1, int j2)
    {
        if (i >= grid.size())
        {
            return 0;
        }
        if (memo[i][j1][j2] != -1)
        {
            return memo[i][j1][j2];
        }

        int count = 0;

        for (auto dj1 : dirs)
        {
            if (j1 + dj1 >= grid[0].size() || j1 + dj1 < 0)
            {
                continue;
            }

            for (auto dj2 : dirs)
            {
                if (j2 + dj2 >= grid[0].size() || j2 + dj2 < 0)
                {
                    continue;
                }

                count = max(count, getMaxCherries(grid, memo, i + 1, j1 + dj1, j2 + dj2));
            }
        }

        memo[i][j1][j2] = count + (j1 == j2 ? grid[i][j1] : grid[i][j1] + grid[i][j2]);

        return memo[i][j1][j2];
    }
};