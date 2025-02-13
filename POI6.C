#include<stdio.h>
#include<conio.h>
int main()
{
int arr[5];
int* ptr1=&arr[0];
int* ptr2=&arr[0];
clrscr();
if(ptr1==ptr2)
{
printf("Pointer to array name and first element are equal");
}
else{
printf("Pointer to array name and first element are not equal");
}
getch();
return 0;
}