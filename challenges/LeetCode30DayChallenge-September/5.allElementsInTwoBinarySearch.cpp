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
    void inorder(TreeNode* root,vector<int> &list){
        if(root==NULL){
            return;
        }
        inorder(root->left,list);
        list.push_back(root->val);
        inorder(root->right,list);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> list1;
        vector<int> list2;
        inorder(root1,list1);
        inorder(root2,list2);
        int len1 = list1.size();
        int len2 = list2.size();
        int i=0,j=0;
        vector<int> result;
        while(i<len1 && j<len2){
            if(list1[i]<list2[j]){
                result.push_back(list1[i]);
                i++;
            }
            else{
                result.push_back(list2[j]);
                j++;
            }
        }
        while(i<len1){
             result.push_back(list1[i]);
                i++;
        }
        while(j<len2){
            result.push_back(list2[j]);
            j++;
        }
        
        return result;
        
    }
};