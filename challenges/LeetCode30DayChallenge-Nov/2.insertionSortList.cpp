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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL)
            return NULL;
       ListNode* dummy = new ListNode(-1);
       ListNode* pre = dummy;
       ListNode* next = NULL;
        ListNode* curr = head;
        while(curr!=NULL){
            next = curr->next;
            while(pre->next!=NULL && pre->next->val < curr->val){
                pre=pre->next;
            }
            curr->next = pre->next;
            pre->next=curr;
            pre=dummy;
            curr=next;
        }
        return dummy->next;
    }
};