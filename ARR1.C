#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3]={{1,34,5},{7,0,15},{23,4,6}};
int b[3][3],c[3][3],i,j;
clrscr();
printf("Enter values in the 3*3 array:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
getch();
return 0;
}