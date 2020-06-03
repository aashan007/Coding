void deleteNode(ListNode* node) {
        ListNode * curr=node;
        ListNode * nxt=node->next;
        ListNode * prev=NULL;
        while(nxt!=NULL){
            curr->val=nxt->val;
            prev =curr;
            curr = curr->next;
            nxt = nxt->next;
        }
        prev->next=NULL;
        
        
        
        
    }