class Solution
{
    vector<vector<int>> mem;
    bool subsetSum(vector<int> &nums, int n, int pos, int sum)
    {
        if (sum == 0)
        {
            return true;
        }
        if (pos >= n || sum < 0)
        {
            return false;
        }
        if (mem[pos][sum] != -1)
        {
            return mem[pos][sum];
        }

        return mem[pos][sum] = subsetSum(nums, n, pos + 1, sum - nums[pos]) || subsetSum(nums, n, pos + 1, sum);
    }

public:
    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        if (sum & 1)
        {
            return false;
        }
        mem.clear();
        mem.resize(n + 1, vector<int>(sum / 2 + 1, -1));

        return subsetSum(nums, n, 0, sum / 2);

        //return result;
    }
};