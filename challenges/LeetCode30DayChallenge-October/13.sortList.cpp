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
    ListNode* merge(ListNode* left,ListNode* right){
        ListNode* sorted = NULL;
        ListNode* current =NULL;
        while(left!=NULL && right !=NULL){
            if(left->val < right->val){
                if(sorted==NULL){
                    sorted=new ListNode(left->val) ;
                    current = sorted;
            }
            else{
                sorted->next =new ListNode(left->val);
                sorted = sorted->next;
            
            }
                left=left->next;
            }
            else{
                if(sorted==NULL){
                    sorted=new ListNode(right->val) ;
                    current = sorted;
            }else{
                sorted->next =new ListNode(right->val);
                sorted = sorted->next;
            
            }
               
                right=right->next;
            }
        
        }
        if(left!=NULL){
            sorted->next = left;
        }
        if(right!=NULL){
            sorted->next = right;
        }
        return current;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp= head;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast!=NULL && fast->next!=NULL){
            temp =slow;
            slow=slow->next;
            fast = fast->next->next;
        }
        temp->next=NULL;
        ListNode * left =sortList(head);
        ListNode * right = sortList(slow);
        
        return merge(left,right);
        
    }
};