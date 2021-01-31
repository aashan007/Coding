class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {

        sort(nums.begin(), nums.end());
        if (k > nums.size())
        {
            return -1;
        }
        return nums[nums.size() - k];
    }
};