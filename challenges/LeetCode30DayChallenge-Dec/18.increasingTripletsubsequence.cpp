class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int left = INT_MAX;
        int mid = left;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > mid)
            {
                return true;
            }
            if (nums[i] < left)
            {
                left = nums[i];
            }
            else
            {
                if (nums[i] < mid && nums[i] > left)
                {
                    mid = nums[i];
                }
            }
        }

        return false;
    }
};