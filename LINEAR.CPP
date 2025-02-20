//Program of Linear Search
#include<iostream.h>
#include<conio.h>
int linearSearch(int arr[],int n,int target)
{
  for(int i=0;i<n;i++)
  if(arr[i]==target)
  {
    return i;
  }
  return -1;
}
 int main()
 {
   clrscr();
   int data[]={12,45,78,23,56,89,67,34,90};
   int n=sizeof(data)/sizeof(data[0]);
   int target=89;
   int result=linearSearch(data,n,target);
   if(result !=-1)
   {
     cout<<" Element Found at index "<<result<<endl;
   }
   else
   {
     cout<<"Elemet not found in the array"<<endl;
   }
  getch();
  return 0;
 }