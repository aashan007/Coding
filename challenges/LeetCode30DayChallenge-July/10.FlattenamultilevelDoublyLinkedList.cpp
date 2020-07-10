/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
    Node* fla(Node* head){
        Node *curr=head, *tail=head;
        while(curr){
            Node *child = curr->child;
            Node *next = curr->next;
            if(child){
                Node *tail=fla(child);
                tail->next=next;
                if(next) next->prev=tail;
                curr->next = child;
                child->prev = curr;
                curr->child = nullptr;
                curr =tail;
                
            }
            else{
                curr=next;
                
            }
            if(curr) tail=curr;
        }
        return tail;
    }
public:
    Node* flatten(Node* head) {
         
        if(head) fla(head);
        
        return head;
         
        
    }
};