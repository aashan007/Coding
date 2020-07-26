    /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0){
            return NULL;
        }
        int root = preorder[0];
        vector<int> preorderLeft;
        vector<int> preorderRight;
        for(int i=1;i<preorder.size();i++){
            if(root>preorder[i]){
                preorderLeft.push_back(preorder[i]);
            }
            else{
                preorderRight.push_back(preorder[i]);
            }
        }
        TreeNode * result = new TreeNode(root);
        result->left = bstFromPreorder(preorderLeft);
        result->right=  bstFromPreorder(preorderRight);
        return result;
        
    }