class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int maxCapacity = 0;
        int l = 0, h = n - 1;

        while (l < h)
        {
            int width = h - l;
            maxCapacity = max(maxCapacity, width * min(height[l], height[h]));
            height[l] < height[h] ? l++ : h--;
        }

        return maxCapacity;
    }
};