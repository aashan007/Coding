/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int leftHeight= height(root->left);
        int rightHeight= height(root->right);
        int leftDiameter=diameterOfBinaryTree(root->left);
        int rightDiameter=diameterOfBinaryTree(root->right);
        
        return max(leftHeight+rightHeight,max(leftDiameter,rightDiameter));
        
      
      
        
    }