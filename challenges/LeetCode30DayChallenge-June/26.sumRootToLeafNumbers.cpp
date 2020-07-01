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
     int sumNumbersRes(TreeNode* root,int res) {
         if(root==NULL){
             return 0;
         }
        if(root->left==NULL && root->right==NULL){
            return res*10+root->val;
        }
         res = res*10+root->val;
    //    cout<<res<<" "<<sumNumbersRes(root->left,res)<<" "<<sumNumbersRes(root->right,res)<<endl;
     //   cout<<((root->val * 10 ) + sumNumbers(root->left)) + ((root->val * 10 )+sumNumbers(root->right))<<endl;
        return sumNumbersRes(root->left,res)+sumNumbersRes(root->right,res);
        
    }
    int sumNumbers(TreeNode* root) {
     int res=0;
      return sumNumbersRes(root,res);
        
    }
};