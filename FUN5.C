#include<stdio.h>
#include<conio.h>
int x=50;
int main()
{
int x=10;
clrscr();
{
extern int x;
printf("Value of global x is %d\n",x);
}
printf("value of local x is %d\n",x);
getch();
return 0;
}