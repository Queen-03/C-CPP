#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,m,n;
clrscr();
printf("Enter the number of rows of array :");
scanf("%d",&n);
int arr[i][j];
for(i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
printf("arr[%d][%d] ;",i,j);
scanf("%d",&arr[i][j]);
}
}
printf("The entered array :\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",arr[i][j]);
}
printf("\n");
}
}
getch();
return 0
}