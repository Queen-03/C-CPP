#include<stdio.h>
#include<conio.h>
int main()
{
int x=6,N=4;
int *ptr1,*ptr2;
clrscr();
ptr1=&x;
ptr2=&N;
printf("ptr1=%p\n ptr2=%p\n",ptr1,ptr2);
x=ptr1-ptr2;
printf("Substraction of ptr1 ptr2 is %d\n",x);
getch();
return 0;
}