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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL){
            return 0;
        }
        int leftRoot = 0;
        int rightRoot = 0;
        int rootVal = 0;
        if(root->val>=low && root->val<=high)
            rootVal = root->val;
        if(root->val<low){
            leftRoot = 0;
            rightRoot = rangeSumBST(root->right,low,high);
            
        }

        else if(root->val>high){
            rightRoot = 0;
            leftRoot = rangeSumBST(root->left,low,high);
            
        }
        else{
            leftRoot = rangeSumBST(root->left,low,high);
            rightRoot = rangeSumBST(root->right,low,high);
            
        }
    //   cout<<root->val<<" "<<leftRoot<<" "<<rightRoot<<endl;
        return rootVal + leftRoot + rightRoot;
        
    }
};