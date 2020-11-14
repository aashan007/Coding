class Solution
{
public:
    void flip(vector<vector<int>> &A)
    {
        int n = A.size();
        if (n == 0)
            return;
        int m = A[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m / 2; j++)
            {
                int k = m - 1 - j;
                int temp = A[i][k];
                A[i][k] = A[i][j];
                A[i][j] = temp;
            }
        }
    }
    void inverse(vector<vector<int>> &A)
    {
        int n = A.size();
        if (n == 0)
            return;
        int m = A[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                A[i][j] = !A[i][j];
            }
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {

        inverse(A);
        flip(A);
        return A;
    }
};