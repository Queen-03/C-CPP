#include<stdio.h>
#include<conio.h>

int main()
{
char str[30];
clrscr();
printf("Enter a string:");
fgets(str,sizeof(str),stdin);
printf("The string is:");
puts(str);
getch();
return 0;
}
