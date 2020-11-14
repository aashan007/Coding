class Solution
{
public:
    void helper(vector<int> &nums, vector<vector<int>> &res, vector<int> lst, vector<bool> &used)
    {
        cout << lst.size() << " " << nums.size() << "\n ";
        if (lst.size() == nums.size())
        {
            res.push_back(lst);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (used[i])
            {
                continue;
            }
            //    cout<<nums[i]<<" "<<i<<" "<<endl;
            used[i] = true;
            lst.push_back(nums[i]);
            helper(nums, res, lst, used);

            lst.pop_back();
            used[i] = false;
            //      cout<<lst.size()<<" "<<nums.size()<<" "<<i<<" 1.\n ";
            while (i + 1 < nums.size())
            {
                if (nums[i] == nums[i + 1])
                {
                    i++;
                }
                else
                    break;
            }
        }
        return;
    }
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {

        vector<vector<int>> res;

        if (nums.size() == 0)
        {
            return {};
        }
        sort(nums.begin(), nums.end());
        vector<bool> used(nums.size(), 0);
        vector<int> lst;
        helper(nums, res, lst, used);
        return res;
    }
};