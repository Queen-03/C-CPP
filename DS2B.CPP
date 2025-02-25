// Program to Delete Elements in array
#include<iostream.h>
#include<conio.h>
int main()
{
	int a[10],i,n,p;
	clrscr();
	cout<<"Enter the number of elements(max 10):"<<endl;
	cin>>n;
	if(n>10 || n<1)
	{
		cout<<"Invalidate of elements . Please enter a number between 1 and 10"<<endl;
		return 1;
	}
	cout<<"Enter the elements :"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	p=a[0];
	for(i=0;i<n;i++)
	{
		a[i-1]=a[i];
	}
	n--;
	cout<<"Deleted element is :"<<p<<endl;
	if(n==0)
	{
		cout<<"Array is Empty"<<endl;
	}
	else
	{
		cout<<"After Deletion , elements are :"<<endl;
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
		cout<<endl;
	}
	getch();
	return 0;
}