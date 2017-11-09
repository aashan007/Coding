#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;


struct node{
  int data;
  node *next;
};
int main(){
  node* n;//n->
  node* t;//temp->
  node* h;//h->
  n=new node;//n-> point to a node with data and a pointer
  n->data=47;
  t=n;
  h=n;//h->point to the first list

}
