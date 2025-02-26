#include<iostream.h>
#include<conio.h>
//using namespace std;

int linearSearch(int arr[], int n,int target)
{
 for(int i=0;i<n;i++)
 {
	if(arr[i]==target)
	{
	return i;  // Element found , return its index
	}
 }
 return -1;
 }
 int main(){
	clrscr();
	int data[]={12,45,78,23,56,89,67,34,90};
	int n=sizeof(data)/ sizeof(data[0]);
	int target=23;
	int result=linearSearch(data,n,target);

	if(result!=-1)
	{
		cout<<"Elements found at index "<<result<<endl;
	}
	else{
		cout<<"Elements not found in the array."<<result;
	}
 getch();
 return 0;
 }

