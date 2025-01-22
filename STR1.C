#include<stdio.h>
#include<conio.h>
void main()
{
char names[2][10],dummy;
int roll_numbers[2],i;
float marks[2];
clrscr();
for(i=0;i<3;i++)
{
printf("Enter name,roll number,and marks %d",i+1);
scanf("%s %d %f",&names[i],&roll_numbers[i],&marks[i]);
scanf("%c",&dummy);
}
printf("Printing the student details...\n");
for(i=0;i<3;i++)
{
printf("%s %d %f\n",names[i],roll_numbers[i],marks[i]);
}
}