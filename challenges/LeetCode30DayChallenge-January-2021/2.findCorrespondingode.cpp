/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
    TreeNode *cloneTarget = NULL;

public:
    void inorder(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {
        if (original == NULL)
        {
            return;
        }
        if (original == target)
        {
            cloneTarget = cloned;
        }
        inorder(original->left, cloned->left, target);
        inorder(original->right, cloned->right, target);
    }

    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {

        inorder(original, cloned, target);

        return cloneTarget;
    }
};