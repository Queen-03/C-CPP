#include<iostream.h>
#inclu

struct Node {
   int data;
   struct Node *next;
};
struct Node* top=NULL;
void push(int val){
      struct Node* newnode=new Node();
      newnode->data=val;
      newnode->next=top;
      top=newnode;
}
void pop(){
   if(top ==NULL)
     cout<<"Stack Underflow"<<endl;
   else {
   ptr=top;
   cout<<"Stack elements are :";
   while (ptr!=NULL){
       cout<<ptr->data<<" ";
       ptr=ptr->next;
     }
   }
cout<<endl;
}
int main(){
	int ch,val