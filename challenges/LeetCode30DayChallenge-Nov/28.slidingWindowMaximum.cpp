class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        int l = k;
        int i = 0;
        priority_queue<int> q;
        unordered_map<int, int> mp;
        vector<int> res;
        int maxVal = INT_MIN;
        if (k >= nums.size())
        {
            for (int i = 0; i < nums.size(); i++)
            {
                q.push(nums[i]);
            }
            res.push_back(q.top());
        }
        else
        {
            while (l--)
            {
                q.push(nums[i]);
                mp[nums[i]]++;
                i++;
            }
            res.push_back(q.top());

            for (int j = i; j < nums.size(); j++)
            {
                mp[nums[j - k]]--;
                q.push(nums[j]);
                mp[nums[j]]++;
                // cout<<nums[j]<<" "<<nums[j]<<" "<<mp[nums[j]]<<" "<<nums[j-k]<<" "<<mp[nums[j-k]]<<endl;
                int val = q.top();
                // cout<<val<<endl;
                while (mp[val] == 0)
                {
                    q.pop();
                    val = q.top();
                }

                res.push_back(val);
            }
        }

        return res;
    }
};