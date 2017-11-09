#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

struct node{
  int data;
  struct node *next;
};
//to insert in front of the list
void push(struct node** head_ref,int new_data){
  struct node* n=new node;
  n->data=new_data;
  n->next=(*head_ref);
  (*head_ref)=n;
}

void insertAfter(struct node* prev,int new_data){
  if(prev==NULL){
    printf("the given previous node cannot be NULL");
    return;
  }
  struct node* n=new node;
  n->data=new_data;
  n->next=prev->next;
  prev->next=n;
}

void append(struct node** head_ref,int new_data){
  struct node* n=new node;
  struct node* last;
  last=*head_ref;
  n->data=new_data;
  n->next=NULL;
  if(*head_ref==NULL){
    *head_ref=n;
    return;
  }
  while((last->next)!=NULL){
    last=last->next;
  }
  last->next=n;

  return;
}
void printlist(struct node *node){
  while(node!=NULL){
    cout<<node->data;
    node=node->next;
  }
}
int main(){
  struct node* head=NULL;
  append(&head,6);
  push(&head, 7);
  push(&head, 1);
  append(&head, 4);
  insertAfter(head->next, 8);
  printlist(head);
}
