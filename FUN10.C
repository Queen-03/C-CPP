#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
int a,b;
clrscr();
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
printf("Before swapping\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
swap(&a,&b);
printf("After swapping\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
getch();
return 0;
 }
 void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }