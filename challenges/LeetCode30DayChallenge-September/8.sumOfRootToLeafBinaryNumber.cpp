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
    void sumRootToLeafHelper(TreeNode* root,int sum,int &result){
        if(root == NULL){
            
            return;
        }
            
                    
        sum = (sum<<1)|root->val;
        
        if(root->left ==NULL && root->right==NULL){
    //        cout<<sum<<endl;
            result = result+sum;
            return;
        }
        sumRootToLeafHelper(root->left,sum,result);
        sumRootToLeafHelper(root->right,sum,result);
        
    }
    int sumRootToLeaf(TreeNode* root) {
        int result = 0;
        sumRootToLeafHelper(root,0,result);
        
        return result;
    }
};