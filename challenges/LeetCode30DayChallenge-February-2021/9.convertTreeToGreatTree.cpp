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
    int sum = 0;
    void traversal(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        traversal(root->right);
        //     cout<<root->val;
        int temp = root->val;
        root->val = sum + root->val;
        sum += temp;
        traversal(root->left);
    }
    TreeNode *convertBST(TreeNode *root)
    {
        traversal(root);

        return root;
    }
};