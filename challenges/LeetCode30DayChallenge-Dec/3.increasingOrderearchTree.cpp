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
    vector<int> inorder;

public:
    void inOrder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        inOrder(root->left);
        inorder.push_back(root->val);
        inOrder(root->right);
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        inOrder(root);
        TreeNode *head = NULL;
        TreeNode *temp = NULL;
        for (int i = 0; i < inorder.size(); i++)
        {
            if (head == NULL)
            {
                head = new TreeNode(inorder[i]);
                temp = head;
            }
            else
            {
                TreeNode *tempNew = new TreeNode(inorder[i]);
                temp->right = tempNew;
                temp = temp->right;
            }
        }
        return head;
    }
};