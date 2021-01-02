class Solution
{
public:
    int fourSumCount(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D)
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < B.size(); j++)
            {
                int sum = A[i] + B[j];
                mp[-sum]++;
            }
        }

        int count = 0;
        for (int i = 0; i < C.size(); i++)
        {
            for (int j = 0; j < D.size(); j++)
            {
                int sum = C[i] + D[j];
                count += mp[sum];
            }
        }

        return count;
    }
};