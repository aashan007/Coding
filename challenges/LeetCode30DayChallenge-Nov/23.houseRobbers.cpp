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
    pair<int,int> robHelper(TreeNode* root){
        if(root==NULL){
            pair<int,int> temp;
            temp.first=0;
            temp.second = 0;
            return temp;
        }       
        pair<int,int> leftNode = robHelper(root->left);
        pair<int,int>rightNode = robHelper(root->right);
        
        pair<int,int> current;
        current.first = root->val + leftNode.second+rightNode.second;
        current.second = max(leftNode.first+rightNode.first,max(leftNode.first+rightNode.second,max(leftNode.second+rightNode.first,leftNode.second+rightNode.second)));
        
        return current;
        
        
    }
    int rob(TreeNode* root) {
        pair <int,int> res= robHelper(root);
        return max(res.first,res.second);
    }
};