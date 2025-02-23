#include<iostream.h>
#include<conio.h>
//QUEUE ADT USING ARRAY
int queue [100],n=100,front=-1,rear=-1;
void insert()
{
int val;
if(rear==n-1)
cout<<"Queue Overflow"<<endl;
else
{
if(front==-1)
front=0;
cout<<"Insert the element in Queue:";
cin>>val;
rear++;
queue[rear]=val;
}
}
void Delete()
{
if(front==-1||front>rear)
{
cout<<"Queue Underflow";
return;
}
else
{
cout<<"Element deleted from Queue is:"<<queue[front]<<endl;
front++;
}
}
void display()
{
if(front== -1)
{
cout<<"Queue is empty"<<endl;
}
else
{
cout<<"Queue elements are:";
for(int i=front;i<=rear;i++)
cout<<queue[i]<<" ";
cout<<endl;
}
}
int main()
{
int ch;
clrscr();
cout<<"1) Insert element to  Queue "<<endl;
cout<<"2) Delete element from Queue "<<endl;
cout<<"3) Display all the elements of Queue "<<endl;
cout<<"4) Exit "<<endl;
do
{
cout<<"Enter Your Choice :"<<endl;
cin>>ch;
switch(ch)
{
case 1 : insert();
break;
case 2 : Delete();
break;
case 3: display();
break;
case 4: cout<<"Exit"<<endl;
break;
default : cout<<"Invalid Choice"<<endl;
}
}
while(ch!=4);
getch();
return 0;
}