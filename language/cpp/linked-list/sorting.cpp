#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

struct node{
  int data;
  struct node* next;
};

void insertion(struct node* num,int data){
  if(num==NULL){
    num->data=data;
    num->next=NULL;
    return;
  }
  struct node* temp;

  temp=num;
  while(num->next!=NULL){
    if((num->data)>num){
      struct node* n=new node;
      n->data=data;
      n->next=num->next;
      num->next=n;
      return;


    }
    num=num->next;
  }

}
void printlist(struct node* n){
  while(n!=NULL){
    cout<<n->data;
    n=n->next;
  }
}

int main(){
  struct node* head=NULL;
  int m,n;
  cin>>n;
  while(m==1){
  insertion(head,n);
  cin>>m;
}
return 0;
}
