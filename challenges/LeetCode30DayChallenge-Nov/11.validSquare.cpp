class Solution
{
public:
    int distSq(vector<int> &p, vector<int> &q)
    {
        return ((p[0] - q[0]) * (p[0] - q[0])) + ((p[1] - q[1]) * (p[1] - q[1]));
    }

    bool validSquare(vector<int> &p1, vector<int> &p2, vector<int> &p3, vector<int> &p4)
    {
        int d1 = distSq(p1, p2);
        int d2 = distSq(p1, p3);
        int d3 = distSq(p1, p4);
        int d4 = distSq(p2, p3);
        int d5 = distSq(p2, p4);
        int d6 = distSq(p3, p4);

        if (d2 == 0 || d3 == 0 || d4 == 0 || d5 == 0 || d1 == 0 || d6 == 0)
            return false;
        unordered_map<int, int> mp;
        mp[d1]++;
        mp[d2]++;
        mp[d3]++;
        mp[d4]++;
        mp[d5]++;
        mp[d6]++;
        //    cout<<d1<<" "<<d2<<" "<<d3<<" "<<d4<<" "<<d5<<" "<<d6<<endl;
        //  cout<<mp[d1]<<" "<<mp[d2]<<endl;
        int count = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            //    cout<<it->first<<" "<<it->second<<endl;
            if (it->second != 4 && it->second != 2)
            {
                return false;
            }
            count++;
        }
        if (count == 2)
        {
            return true;
        }
        //cout<<"re";
        return false;
    }
};