/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
    //string result;
public:
    

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
       if(root==NULL){
           return "X,";
       }  
       return to_string(root->val) + ","+ serialize(root->left) + serialize(root->right);
    }
    
       TreeNode* deserializeHelper(queue<string> &q) {

           string value= q.front();
           q.pop();
       //   cout<<value<<" ";
           if(value=="X") return NULL;
           
           int val = stoi(value);
     //      cout<<"val : "<<val<<endl;
           TreeNode* newNode = new TreeNode(val);
           newNode->left = deserializeHelper(q);
           newNode->right = deserializeHelper(q);
           return newNode;
           
           
       }
    

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
         queue<string> q;
        stringstream ss (data);
        string item;

        while (getline (ss, item, ',')) {
            q.push(item);
        }



    
        return deserializeHelper(q);
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;