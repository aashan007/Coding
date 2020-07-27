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
    int postOrderPointer = -1;
    TreeNode* result(vector<int>& inorder, vector<int>& postorder,int inorderLeft,int inorderRight){
        if(inorderLeft>inorderRight){
            return NULL;
        }
        TreeNode * root = new TreeNode(postorder[postOrderPointer]);
        int index = postOrderPointer;
        postOrderPointer--;
        if(inorderLeft == inorderRight){
            return root;
        }
        int ind;
        cout<<inorderLeft<<" "<<inorderRight<<" "<<postOrderPointer<<endl;
        for(int i=inorderLeft;i<=inorderRight;i++){
            if(inorder[i]==postorder[index]){
                ind =i;
                break;
                
            }
        }
        root->right = result (inorder,postorder,ind+1,inorderRight);
        root->left =  result (inorder,postorder,inorderLeft,ind-1);
        
        return root;

 
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()==0){return NULL;}
        postOrderPointer = postorder.size()-1;
        
        return result(inorder,postorder,0,inorder.size()-1);
        
    }
};