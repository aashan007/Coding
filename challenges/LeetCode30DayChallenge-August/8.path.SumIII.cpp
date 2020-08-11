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
    int pathSum1(TreeNode* root,int sum){
        if(root==NULL) return 0;
        int res=0;
        if(root->val==sum) res++;
        
        res+= pathSum1(root->left,sum-root->val);
        res+=pathSum1(root->right,sum-root->val);
        return res;
    }
public:
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL){
            return 0;
        }
        
        return pathSum(root->left,sum) +pathSum(root->right,sum)+ pathSum1(root,sum);
    }
};