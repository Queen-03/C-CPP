#include<stdio.h>
#include<conio.h>
int main()
{
int disp[2][3];
int i,j;
clrscr();
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("Enter value of for dis[%d][%d]:",i,j);
scanf("%d",&disp[i][j]);
}
}
printf("Two dimensional array elements:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",disp[i][j]);
if(j==2)
{
printf("\n");
}
}
}
getch();
return 0;
}