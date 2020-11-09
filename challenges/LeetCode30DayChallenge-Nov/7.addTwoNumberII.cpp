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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        stack<int> L1;
        stack<int> L2;
        while(l1!=NULL){
            L1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            L2.push(l2->val);
            l2=l2->next;
        }
        
        int carry=0;
        int total=0;
        ListNode* head=NULL;
        while(!L1.empty() || !L2.empty()){
            int a=0;
            int b=0;
        
            if(!L1.empty()){
                a = L1.top();
                L1.pop();
            }
            if(!L2.empty()){
                b=L2.top();
                L2.pop();
            }
            total = (a+b+carry);
            carry = (total)/10;
            ListNode* temp = new ListNode(total%10);
            if(head == NULL)
                head=temp;
            else{
                temp->next = head;
                head = temp;
            }
        }
        if(carry!=0){
            ListNode* temp = new ListNode(carry);
            temp->next=head;
            head=temp;
        }
        return head;
        
    }
};