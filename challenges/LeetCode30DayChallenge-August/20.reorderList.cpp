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
    void merge(ListNode* l1,ListNode* l2){
        while(l1!=NULL){
          
            
            
            ListNode* l1Next = l1->next;
            ListNode* l2next = l2->next;
            l1->next = l2;
            if(l1Next == NULL){
                break;
            }
            
            l2->next = l1Next;
            
            l1 = l1Next;
            l2 = l2next;
        }
        
    }
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next1=head;
        while(curr){
            next1 = curr->next;
            curr->next = prev;
            prev =curr;
            curr = next1;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode * refHead=head;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = head;
        while(fast!=NULL && fast->next!=NULL){
            prev = slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
        prev->next=NULL;
        
        ListNode* rev=reverse(slow);
        ListNode* temp = rev;
        // while(temp){
        //     cout<<temp->val<<" ";
        //     temp=temp->next;
        // }
        merge(refHead,rev);
        
    }
};