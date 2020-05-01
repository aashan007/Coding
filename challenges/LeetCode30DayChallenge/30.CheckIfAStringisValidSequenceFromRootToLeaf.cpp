bool resultant(TreeNode* root,vector<int> &arr,int index){
        if(root==NULL){
            return false;
        }
        
        if(root->left==NULL && root->right==NULL && arr.size()-1==index && root->val==arr[index]){
            return true;
        }
        if(index==arr.size()-1){
            return false;
        }
      //  cout<<root->val<<" "<<arr[index]<<" "<<index<<endl;
        if(root->val == arr[index]){
            return resultant(root->left,arr,index+1) || resultant(root->right,arr,index+1);
        }
        else{
            return false;
        }
        
    }
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        int index=0;
        return resultant(root,arr,index);
        
    }