class Solution
{
public:
    int longestMountain(vector<int> &A)
    {
        if (A.size() <= 2)
        {
            return 0;
        }
        int maxLen = 0;

        for (int i = 1; i < A.size(); i++)
        {
            int left = 0;
            int right = 0;

            for (int j = i; j > 0; j--)
            {
                if (A[j] > A[j - 1])
                    left++;
                else
                    break;
            }
            for (int j = i; j < A.size() - 1; j++)
                if (A[j] > A[j + 1])
                    right++;
                else
                    break;

            if (left != 0 && right != 0)
            {
                maxLen = max(maxLen, left + right + 1);
            }
        }

        return maxLen;
    }
};