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
    int result = 0;
    int tilt(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int left = tilt(root->left);
        int right = tilt(root->right);
        result += abs(left - right);
        return left + right + root->val;
    }
    int findTilt(TreeNode *root)
    {
        tilt(root);
        return result;
    }
};