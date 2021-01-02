class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> s;

        int i = 0;

        int n = heights.size();

        int max_area = 0;

        while (i < n)
        {

            if (s.empty() || heights[s.top()] < heights[i])
            {
                s.push(i);
                i++;
                continue;
            }

            else
            {

                int x = s.top();
                s.pop();
                int area = heights[x] * (s.empty() ? i : i - s.top() - 1);
                max_area = max(max_area, area);
            }
        }

        //Process the remaining bars

        while (!s.empty())
        {
            int x = s.top();
            s.pop();
            int area = heights[x] * (s.empty() ? i : i - s.top() - 1);
            max_area = max(max_area, area);
        }

        return max_area;
    }
};