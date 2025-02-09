#include<stdio.h>
#include<conio.h>
void geeks()
{
int var=10,*ptr;
clrscr();
ptr=&var;
printf("Value at ptr=%p\n",ptr);
printf("Value at var=%d\n",var);
printf("Value at *ptr=%d\n",*ptr);
}
int main()
{
geeks();
getch();
return 0;
}