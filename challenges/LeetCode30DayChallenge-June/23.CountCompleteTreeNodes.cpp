class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
            
        }
        TreeNode* left=root;
        TreeNode* right=root;
        int l_count=0;
        int r_count=0;
        while(left){
            l_count++;
            left=left->left;
        }
        while(right){
            r_count++;
            right=right->right;
        }
        if(r_count==l_count){
            return (1<<r_count) - 1;
        }
        return 1+countNodes(root->left) + countNodes(root->right);
        
    }
};