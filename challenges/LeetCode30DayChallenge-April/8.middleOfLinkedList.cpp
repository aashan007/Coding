// Function Implementation

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


ListNode* middleNode(ListNode* head) {
        if(head->next==NULL){
            return head;
        }
        if(head->next->next==NULL){
            return head->next;
        }
        int count=1;
        ListNode* temp=head;
        ListNode* temp1=head->next;
        
        while(temp1!=NULL && temp1->next!=NULL){
            count++;
            cout<<temp->val<<" "<<temp1->val<<endl;
            temp=temp->next;
            temp1=temp1->next->next;
            
            
        }
      //  cout<<count;
        if(temp1==NULL){
            return temp;
        }
        else{
            return temp->next;
        }
        //return temp;
        
    }