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
void findDepth(TreeNode* root,int x,int depth,pair<int,TreeNode *> &p,TreeNode* parent){
        if(root==NULL){
            return;
        }
        if(root->val==x){
            p.first = depth;
            p.second = parent;
            return;
        }
        
        findDepth(root->left,x,depth+1,p,root);
        
        findDepth(root->right,x,depth+1,p,root);
    }

    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL){
            return false;
        }
        pair<int,TreeNode*> p1;
        pair<int,TreeNode*> p2;
    
        findDepth(root,x,0,p1, NULL);
        
        findDepth(root,y,0,p2,NULL);
        
    
        if(p1.first==p2.first && p1.second!=p2.second){
            return true;
        }
        return false;
        
    }