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
public:
    int heightTree(TreeNode *root)
    {
        if(root==NULL){
            return 0;
        }
        return 1+max(heightTree(root->left),heightTree(root->right));   
    }
    void levelOrder(TreeNode * root,int height,int maX,vector<vector<int>> &result){
        if(root==NULL){
            return;
        }
        result[maX-1-height].push_back(root->val);
        height++;
        levelOrder(root->left,height,maX,result);
        levelOrder(root->right,height,maX,result);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int height = heightTree(root);
        if(height==0){
            return {};
        }
        vector<vector<int>> result(height,vector<int>());
      //  cout<<height;
        //vector<vector<int>> result;
        levelOrder(root,0,height,result);
        return result;
    }
};