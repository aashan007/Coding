void kthtest(TreeNode* root,int k,int &count,int &result){
        if(root==NULL){
            return ;
        }
        kthtest(root->left,k,count,result);
        
        count++;
        if(count==k){
            result=root->val;
            return;
        }
        cout<<root->val<<" "<<count<<endl;
        kthtest(root->right,k,count,result);
        
        
    }
    int kthSmallest(TreeNode* root, int k) {
        int count =0;
        int result=0;
        kthtest(root,k,count,result);
        return result;
    }