#include<stdio.h>
#include<conio.h>
int sum(int a,int b)
{
return a+b;
}
int main()
{
int a=30,b=60,res;
clrscr();
res=sum(a,b);
printf("Sum is :%d",res);
getch();
return 0;
}