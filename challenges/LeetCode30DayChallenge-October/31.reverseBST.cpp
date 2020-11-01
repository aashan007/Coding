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
class Solution {
    TreeNode* first = NULL;
    TreeNode* second= NULL;
    TreeNode* prev= NULL;
public:
    void recoverTreeHelper(TreeNode* root){
     if(root==NULL){
         return;
     }
     recoverTreeHelper(root->left);
     if(first==NULL && prev!=NULL && prev->val>=root->val) first = prev;
     if(first!=NULL && prev!=NULL && prev->val>=root->val) second = root;
     prev = root;
     recoverTreeHelper(root->right);
    }
    void recoverTree(TreeNode* root) {
        if(root==NULL){
            return;
        }
        recoverTreeHelper(root);
        int temp = first->val;
        first->val =second->val;
        second->val = temp;
    }
};