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
    void traverse(TreeNode *root, int maxx, int minn, int &res)
    {
        if (root == NULL)
            return;
        res = max(res, max(abs(minn - root->val), abs(maxx - root->val)));
        if (root->val < minn)
            minn = root->val;
        if (root->val > maxx)
            maxx = root->val;

        traverse(root->left, maxx, minn, res);
        traverse(root->right, maxx, minn, res);
    }

    int maxAncestorDiff(TreeNode *root)
    {

        int res = 0;
        int maxx = root->val;
        int minn = root->val;
        traverse(root, maxx, minn, res);

        return res;
    }
};