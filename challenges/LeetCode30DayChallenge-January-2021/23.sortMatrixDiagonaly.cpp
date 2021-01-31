class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {

        int m = mat.size();
        int n = mat[0].size();
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            int k = i;
            vector<int> temp;
            while (j < m && k < n)
            {
                //         cout<<"Start"<<endl;
                //         cout<<j<<" "<<k<<endl;
                temp.push_back(mat[j][k]);
                j++;
                k++;
            }
            sort(temp.begin(), temp.end());
            j = 0;
            k = i;
            int l = 0;
            // for(int i=0;i<temp.size();i++)
            //     cout<<temp[i]<<" ";
            //    cout<<endl;
            while (j < m && k < n)
            {
                mat[j][k] = temp[l];
                //    cout<<j<<" "<<k<<" "<<temp[l]<<endl;
                k++;
                j++;
                l++;
            }
        }

        for (int i = 1; i < m; i++)
        {
            int j = i;
            int k = 0;
            vector<int> temp;
            while (j < m && k < n)
            {

                temp.push_back(mat[j][k]);
                j++;
                k++;
            }
            sort(temp.begin(), temp.end());
            j = i;
            k = 0;
            int l = 0;
            while (j < m && k < n)
            {
                mat[j][k] = temp[l];
                k++;
                j++;
                l++;
            }
        }

        return mat;
    }
};