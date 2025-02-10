#include<stdio.h>
#include<conio.h>
int main()
{
int N=4,ptr1,ptr2;
clrscr();
ptr1=&N;
ptr2=&N;
printf("Pointer ptr2 before Substraction:");
printf("%u\n",ptr2);
ptr2=ptr2-3;
printf("Pointer ptr2 after Substraction:");
printf("%u\n",ptr2);
getch();
return 0;
}