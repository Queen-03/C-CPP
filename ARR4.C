#include<stdio.h>
#include<conio.h>
int main()
{
int abc[2][4];
int i,j;
clrscr();
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
printf("Enter value for abc[%d][%d]:",i,j);
scanf("%d",&abc[i][j]);
}
}
getch();
return 0;
}