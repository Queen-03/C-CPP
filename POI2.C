#include<stdio.h>
#include<conio.h>
int main()
{
int a=22,*p=&a;
float b=22.22,*q=&b;
clrscr();
printf("p=%u\n",p);
p++;
printf("p++=%u\n",p);
p--;
printf("p--=%u\n",p);

printf("q=%u\n",q);
q++;
printf("q++=%u\n",q);
q--;
printf("q--=%u\n",q);
getch();
return 0;
}