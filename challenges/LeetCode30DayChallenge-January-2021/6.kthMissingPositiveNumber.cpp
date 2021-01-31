class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int ind = 0;
        int count = 0;
        if (arr.size() == 0)
        {
            return k;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            int curr = arr[i];
            ind = i + 1;
            if (arr[i] > ind + count)
            {
                int diff = arr[i] - (ind + count);
                //     cout<<diff<<" diff\n";
                if (count + diff < k)
                {
                    count = count + diff;
                }
                else if (count + diff == k)
                {
                    return arr[i] - 1;
                }
                else
                {
                    if (i - 1 < 0)
                    {
                        return k;
                    }
                    return arr[i - 1] + k - count;
                }
            }
            //        cout<<ind<<" "<<count<<endl;
        }

        return arr[arr.size() - 1] + k - count;
    }
};