class Solution
{
public:
    int dir[8][2] = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}, {0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    void gameOfLife(vector<vector<int>> &board)
    {

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                int count = 0;

                for (auto c : dir)
                {

                    int p = i + c[0];
                    int q = j + c[1];
                    //          cout<<p<<" "<<q<<endl;

                    if (p >= 0 && p < board.size() && q >= 0 && q < board[i].size() && (board[p][q] == 1 || board[p][q] == 2))
                    {
                        count++;
                    }
                }

                //cout<<count<<endl;

                if (board[i][j] == 1)
                {
                    if (count < 2 || count > 3)
                    {
                        board[i][j] = 2;
                    }
                }
                else
                {
                    if (count == 3)
                    {
                        board[i][j] = 3;
                    }
                }
            }
        }

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                board[i][j] = board[i][j] % 2;
            }
        }
    }
};