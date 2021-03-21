class Solution
{
public:
    bool validcolor(vector<vector<int> > &graph, vector<int> &color, int col, int ind)
    {
        if (color[ind] != 0)
            return color[ind] == col;
        color[ind] = col;
        for (int i : graph[ind])
        {
            if (!validcolor(graph, color, -col, i))
                return false;
        }

        return true;
    }
    bool isBipartite(vector<vector<int> > &graph)
    {
        vector<int> color(graph.size(), 0);

        for (int i = 0; i < graph.size(); i++)
        {
            if (color[i] == 0 && !validcolor(graph, color, 1, i))
                return false;
        }

        return true;
    }
};