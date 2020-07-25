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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return NULL;
        }

        ListNode* curr = head;
        ListNode* prev=NULL;
        ListNode* next=curr;
        head=NULL;
        while(curr){
            next = curr->next;
            if(curr->val==val){
                if(prev==NULL){
                    
                }
                else{
                    prev->next = next;
                }
                curr=next;
                
            }
            else
            {
                if(prev==NULL){
                    head=curr;
                }
                prev=curr;
            
                curr=next;
            }
        }
        return head;
        
    }
};