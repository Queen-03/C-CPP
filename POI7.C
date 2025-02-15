#include<stdio.h>
#include<conio.h>
int main()
{
int i, N=5;
int arr[]={1,2,3,4,5};
int* ptr;
clrscr();
ptr=arr;
for(i=0;i<N;i++)
{
printf("%d ",ptr[0]);
ptr++;
}
getch();
return 0;
}