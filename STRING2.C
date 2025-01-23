#include<stdio.h>
#include<conio.h>
int main()
{
char str[]="Scaler";
printf("%c",*str);
printf("%c",*(str+1));
printf("%c\n",(str+6));
char*stringPtr;
stringPtr=str;
printf("%c",*stringPtr);
printf("%c",*(stringPtr+1));
printf("%c",*(stringPtr+6));
getch();
return 0;
}