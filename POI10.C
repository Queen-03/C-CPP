#include<stdio.h>
#include<conio.h>
void func(int a,int b)
{
a+=b;
printf("In func,a=%d b=%d\n",a,b);
}
int main(void)
{
int x=5,y=7;
clrscr();
func(x,y);
printf("In main,x=%d y=%d\n",x,y);
getch();
return 0;
}
