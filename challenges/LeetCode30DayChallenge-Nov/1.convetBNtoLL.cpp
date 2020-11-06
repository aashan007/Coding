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
    int getDecimalValue(ListNode* head) {
        if(head==NULL){
            return 0;
        }
        int val = -1;
        ListNode* curr=head;
        while(curr){
            val++;
            curr=curr->next;
        }
        int result=0;
        while(head){
            result += head->val<<val;
            val--;
            head=head->next;
        }
        
        return result;
        
    }
};