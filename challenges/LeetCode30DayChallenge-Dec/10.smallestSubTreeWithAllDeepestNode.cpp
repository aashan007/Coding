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
    int maxDepth = -1;
    TreeNode *result = NULL;
    TreeNode *subtreeWithAllDeepest(TreeNode *root)
    {
        postorder(root, 0);
        return result;
    }
    int postorder(TreeNode *root, int depth)
    {
        if (root == NULL)
            return depth;

        int left = postorder(root->left, depth + 1);
        int right = postorder(root->right, depth + 1);

        if (left == right)
        {
            maxDepth = max(maxDepth, left);
            if (maxDepth == left)
            {
                result = root;
            }
        }
        return max(left, right);
    }
};