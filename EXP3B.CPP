#include<iostream.h>
#include<conio.h>
//Function to sort an Array
void insertionSort(int arr[], int n)
{
int i,key,j;
for(i=1;i<n;i++)
{
key=arr[i];
j=i-1;
//Move elements of arr[0..i-1],
//that are greater than key, to one
//position ahead of their
//current position
while(j>=0 && arr[j]>key)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}
//A utility function to print an array of size n
void printArray(int arr[], int n)
{
int i;
cout<<"Sorted array:"<<endl;
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
}
//Driver Code
int main()
{
int arr[]={12,17,13,9,6};
int N= sizeof(arr) / sizeof(arr[0]);
clrscr();
cout<<"Unsorted Array:"<<endl;
for(int i=0;i<5;i++)
cout<<arr[i]<<" ";
cout<<endl;
insertionSort(arr,N);
printArray(arr,N);
getch();
return 0;
}

