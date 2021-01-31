class Solution
{
public:
    bool kLengthApart(vector<int> &nums, int k)
    {
        int right = nums.size() - 1;

        while (right >= 0 && nums[right] != 1)
        {
            right--;
        }

        int left = 0;

        while (left < nums.size() && nums[left] != 1)
        {
            left++;
        }
        // if(left>right){
        //     return true;
        // }
        int ind = 0;
        for (int i = left + 1; i <= right; i++)
        {
            if (nums[i] == 1)
            {
                if (ind < k)
                {
                    return false;
                }
                ind = 0;
            }
            else
                ind++;
        }

        return true;
    }
};