class Solution
{
public:
    int shortestPathBinaryMatrix(vector<vector<int> > &grid)
    {
        if (grid[0][0] == 1)
            return -1;
        int m = grid.size();
        int n = grid.size();

        queue<vector<int> > Q;
        Q.push({0, 0, 1});
        grid[0][0] = 1;
        vector<vector<int> > temp = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, -1}, {1, 1}, {-1, 1}, {-1, -1}};
        while (!Q.empty())
        {
            int size = Q.size();
            if (size-- > 0)
            {
                vector<int> point = Q.front();
                Q.pop();
                if (point[0] == m - 1 && point[1] == n - 1)
                {
                    return point[2];
                }

                for (vector<int> ch : temp)
                {
                    int r = point[0] + ch[0];
                    int l = point[1] + ch[1];

                    if (r >= 0 && l >= 0 && r < m && l < n && grid[r][l] == 0)
                    {
                        Q.push({r, l, point[2] + 1});
                        grid[r][l] = 1;
                    }
                }
            }
        }

        return -1;
    }
};