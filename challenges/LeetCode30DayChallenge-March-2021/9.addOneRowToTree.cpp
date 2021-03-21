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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        
        if(d==1){
            TreeNode* newNodeLeft = new TreeNode(v);
            newNodeLeft->left = root;
            return newNodeLeft;
        }
        
        queue<pair<TreeNode*,int>> q;
        pair<TreeNode*,int> pt;
        pt.first = root;
        pt.second = 1;
        q.push(pt);
        
        while(!q.empty()){
            pair<TreeNode*,int> curr = q.front();
            q.pop();
            if(d == curr.second+1){
                cout<<"test"<<endl;
                TreeNode* newNodeLeft = new TreeNode(v);
                TreeNode* newNodeRight = new TreeNode(v);
                if(curr.first->left!=NULL || curr.first->right!=NULL)
                {
                    newNodeLeft->left = curr.first->left;
                    curr.first->left = newNodeLeft;   
                     pair<TreeNode*,int> pt1;
                     pt1.first = newNodeLeft;
                     pt1.second = curr.second+1;
                    q.push(pt1);
                    
                    newNodeRight->right = curr.first->right;
                    curr.first->right = newNodeRight;  

                     pt1.first = newNodeRight;
                     pt1.second = curr.second+1;
                    q.push(pt1);
                   
                }

                if(curr.first->left == NULL && curr.first->right == NULL){
                    cout<<'hit howa'<<endl;
                      TreeNode* newNodeLeft = new TreeNode(v);
                      TreeNode* newNodeRight = new TreeNode(v);
                      TreeNode* Curr = curr.first;
                      Curr->left = newNodeLeft;
                      Curr->right = newNodeRight;
                }

            }
            else{
                if(curr.first->left!=NULL){
                      pair<TreeNode*,int> pt1;
                      pt1.first = curr.first->left;
                      pt1.second = curr.second+1;
                      q.push(pt1);
                      
                }
                if(curr.first->right!=NULL){
                      pair<TreeNode*,int> pt1;
                      pt1.first = curr.first->right;
                      pt1.second = curr.second+1;
                    q.push(pt1);
                }
              
            }
        }
        
        return root;
        
    }
};