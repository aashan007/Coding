/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    ListNode * intersect(ListNode *head){
        ListNode* curr = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            curr=curr->next;
            fast=fast->next->next;
            if(curr==fast){
                return curr;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode *start=head;

        ListNode *inter=intersect(head);
        if (inter==NULL)
            return NULL;
        while(start!=inter){
            start=start->next;
            inter=inter=inter->next;
        }
        return inter;
    }
};