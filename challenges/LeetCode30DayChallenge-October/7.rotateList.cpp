/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        int length =0;
        ListNode* curr = head;
        ListNode* tail = NULL;
        while(curr!=NULL){
            length++;
            tail = curr;
            curr=curr->next;
        }
    
        k = k%length;
  
//      cout<<k<<" "<<length<<endl;
    
        if(k==0){
            return head;
        }
              tail->next = head;
            curr = head;
        int i=1;
        while(i<(length-k)){
            curr=curr->next;
            i++;
        }
        ListNode* res = curr->next;
        curr->next = NULL;
        
        return res;
        

        
    }
};