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
//     vector<vector<int>> result;
//     void zigzag(TreeNode *root,bool zz){
//         if(root==NULL){
//             return;
//         }
//         queue<pair<TreeNode *,int>> q;
//         q.push(make_pair(root,1));
//     //    vector<int> tmp;
//         int index=1;
//         while(!q.empty()){
//             index++;
//             zz = !zz;
//             pair<TreeNode*,int> tmp = q.front();
//             q.pop();
//             if(result.size()<tmp.second){
//                 vector<int> temp;
//                 temp.push_back(tmp.first->val);
//                 result.push_back(temp);
//             }
//             else{
                
//             }
//             tmp.push_back(temp->val);
//             if(zz==1){
//                 if(temp->left)
//                     q.push(make_pair(temp->left,index));
//                 if(temp->right)
//                     q.push(make_pair(temp->right,index));
//             }
//             else{
//                 if(temp->right)
//                     q.push(make_pair(temp->right,index));
//                 if(temp->left)
//                     q.push(make_pair(temp->left,index));
//             }
//         }
//       //  result.push_back(tmp);
//     }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>> result;
        deque<TreeNode*> Q;
        Q.push_front(root);
        
        bool zz=1;
        while(!Q.empty()){
            int count = Q.size();
            vector<int> temp;
            deque<TreeNode*> dQ;
            for(int i=0;i<count;i++){
                TreeNode* n=Q.front();
                temp.push_back(n->val);
                Q.pop_front();
                if(zz){
                    if(n->left)
                        dQ.push_front(n->left);
                    if(n->right)
                        dQ.push_front(n->right);
                }
                else{
                    if(n->right)
                        dQ.push_front(n->right);
                    if(n->left)
                        dQ.push_front(n->left);
                    
                    
                }
                
            }
            Q.insert(Q.end(),dQ.begin(),dQ.end());
            result.push_back(temp);
            zz=!zz;
        }
        
        
        
        
        return result;
        
    }
};