class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            if (nums[left] == target || nums[right] == target)
            {
                return true;
            }

            if (target > nums[left])
            {
                while (left < right && nums[left + 1] == nums[left])
                {
                    left++;
                }
                left++;
            }

            else if (target < nums[right])
            {
                while (left < right && nums[right - 1] == nums[right])
                {
                    right--;
                }
                right--;
            }
            else
            {
                break;
            }
        }
        return false;
    }
};