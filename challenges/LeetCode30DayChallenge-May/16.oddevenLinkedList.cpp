ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* tempHead=head;
        ListNode* secondHead=head->next;
        ListNode* prev=tempHead;
        ListNode* consist = NULL;
        int count=0;
        while(tempHead->next!=NULL){
            //prev=tempHead;
            count++;
            tempHead=tempHead->next;
            prev->next = tempHead->next;
            consist = prev;
            prev=tempHead;
        }
        if(count%2==0){
            tempHead->next=secondHead;
        }
        else{
            consist->next=secondHead;
        }
       // tempHead->next=secondHead;
        return head;
        
    }