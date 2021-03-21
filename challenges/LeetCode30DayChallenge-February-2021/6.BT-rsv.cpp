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
    vector<int> result;
    unordered_set<int> st;
    void postorder(TreeNode *root, int index)
    {
        if (root == NULL)
        {
            return;
        }
        if (st.count(index) == 0)
        {
            st.insert(index);
            result.push_back(root->val);
        }
        postorder(root->right, index + 1);
        postorder(root->left, index + 1);
    }
    vector<int> rightSideView(TreeNode *root)
    {
        if (root == NULL)
        {
            return {};
        }
        postorder(root, 1);

        return result;
    }
};