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
  
    ListNode* prevY = NULL;
    ListNode* currY = NULL;
    int lK = -1;
public:
    void swapNodesHelper(ListNode* head,ListNode* lastprev,int &k){
        if(head==NULL){
            return;
        }
        
        swapNodesHelper(head->next,head,k);
        k--;
    //    cout<<k<<endl;
        if(k==0){
            prevY = lastprev;
            currY = head;
        }
    }
    ListNode* swapNodes(ListNode* head, int k) {
      
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* currX = head;
        ListNode* prevX = NULL;
        int count = 0;
        
        while(currX){
            count++;
            if(count==k){
                break;
            }
            prevX = currX;
            currX=currX->next;
        }
        swapNodesHelper(head,NULL,k);
        
        if (prevX != NULL)  
            prevX->next = currY;  
        else  
            head = currY;
        
        if (prevY != NULL)  
            prevY->next = currX;  
        else 
            head = currX;  
        
        ListNode *temp = currY->next;  
        currY->next = currX->next;  
        currX->next = temp; 
        
        return head;
        
    }
};