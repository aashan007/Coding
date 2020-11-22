bool compareto(vector<int> &v1, vector<int> &v2)
{
    if (v1[0] != v2[0])
    {
        return v1[0] < v2[0];
    }
    return v1[1] < v2[1];
}

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        if (intervals.size() <= 1)
        {
            return intervals;
        }

        sort(intervals.begin(), intervals.end(), compareto);

        vector<vector<int>> result;
        for (int i = 0; i < intervals.size(); i++)
        {
            vector<int> temp = intervals[i];
            if (i + 1 < intervals.size())
            {
                int j = i + 1;
                //     cout<<i<<j<<endl;
                while (temp[1] >= intervals[j][0])
                {
                    if (temp[1] < intervals[j][1])
                        temp[1] = intervals[j][1];
                    i++;
                    //      cout<<i<<" "<<j<<" "<<temp[0]<<" "<<temp[1]<<endl;

                    j++;
                    if (j >= intervals.size())
                    {

                        break;
                    }
                }
            }

            result.push_back(temp);
        }

        //         for(int i=0;i<intervals.size();i++){
        //             cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        //         }

        return result;
    }
};