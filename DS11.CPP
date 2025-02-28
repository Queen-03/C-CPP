#include<iostream.h>
#include<conio.h>
//using namespace std ;
//Dynamic queue
//Define a struct to represent a node in the queue
struct node{
	int data;           // To store the data of the node
	struct node* next;   // To Point to the next node in the queue
};

// Initialize global pointers to the front and rear of the queue
struct node* front =NULL;
struct node* rear =NULL;

/**
* Inserts an elements into the queue.
*/
void  Insert(){
      int val;
      cout<<"Insert the element in queue:"<<endl;
      cin>>val;

      //Allocate memory for a new node
      node* newNode=new node;

      //Initialize the new node's data and next pointer
      newNode->data=val;
      newNode->next=NULL;

      //Check if the queue is empty
      if (rear == NULL){
	  //if the queue is empty,set both front and rear to the new node
	  front=rear=newNode;
      }else{
	  //if the queue is not empty,insert at the rear and update rear
	  rear->next=newNode;
	  rear=newNode;
      }
}

/**
* Deletes an elements from the queue.
*/
void Delete(){
     // Check if the queue is empty
     if (front == NULL){
     {
	//if the queue is empty ,print underflow message
	cout<<"Underflow"<<endl;
	return;
     }

     //Store the front node in a temporary pointer
     node* temp=front;

     //Print the element being deleted
     cout<<"Element deleted from queue is:"<<front->data<<endl;

     //Move the front pointer to the next node
     front=front->next;

     //Free the memory allocated for the deleted node
     delete temp;

     //Check if the queue becomes empty after deletion
     if(front == NULL){
	  //if the queue is empty , set rear to NULL
	  rear = NULL;
     }
}

/**
* Displays all the elements in the queue.
*/
void Display(){
       // Check if the queue is empty
       if(front == NULL){
	   //If the queue is empty,print a message
	   cout<<"Queue is empty"<<endl;
	   return;
       }

       // Print the queue elements
       cout<<"Queue elements are:";

       //Use a temporary pointer to traverse the queue
       node* temp = front;
       while(temp !=NULL){
	     //Print the current node's data
	     cout<<temp->data<<" ";

	     // Move to the next node
	     temp = temp->next;
       }
       cout<<endl;
}
int main(){
	// Variabl