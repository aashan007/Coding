class Solution
{
public:
    bool bfs(vector<int> &arr, vector<int> &visited, int pos)
    {
        queue<int> q;
        q.push(pos);

        int n = arr.size();
        int flag = false;
        while (!q.empty())
        {
            int pos1 = q.front();
            visited[pos1] = true;
            if (arr[pos1] == 0)
            {
                flag = true;
                break;
            }
            q.pop();
            int val1 = pos1 - arr[pos1];
            int val2 = pos1 + arr[pos1];
            if (val1 >= 0 && val1 < n)
            {
                if (!visited[val1])
                    q.push(val1);
            }
            if (val2 >= 0 && val2 < n)
            {
                if (!visited[val2])
                    q.push(val2);
            }
        }

        return flag;
    }
    bool canReach(vector<int> &arr, int start)
    {
        vector<int> visited(arr.size(), 0);
        if (arr.size() <= 1)
        {
            return true;
        }

        return bfs(arr, visited, start);
    }
};