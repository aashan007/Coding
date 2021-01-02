/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int dfs(TreeNode *root, vector<int> &val)
    {
        if (root == NULL)
        {
            return 0;
        }
        if (root->left == NULL && root->right == NULL)
        {
            val[root->val]++;
            int c = 0;
            for (auto ch : val)
            {
                if (ch % 2)
                    c++;
            }
            val[root->val]--;
            if (c > 1)
                return 0;
            return 1;
        }
        else
        {
            val[root->val]++;
            int ans = dfs(root->left, val) + dfs(root->right, val);
            val[root->val]--;
            return ans;
        }
    }
    int pseudoPalindromicPaths(TreeNode *root)
    {
        vector<int> val(10, 0);

        return dfs(root, val);
    }
};