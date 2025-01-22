#include<stdio.h>
#include<conio.h>
void pointer(char*str)
{
printf("The string is :");
puts(str);
printf("\n");
}
void array(char str[])
{
printf("The string is :");
puts(str);
printf("\n");
}
int main()
{
char str[29]="Scaler is amazing.";
clrscr();
pointer(str);
array(str);
getch();
return 0;
}