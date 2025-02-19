#include<stdio.h>
#include<conio.h>
struct student
{
char name[100];
int roll;
float marks;
};
int main()
{
struct student stu1;
clrscr();
printf("Enter student name:");
gets(stu1.name);
printf("Enter student roll no:");
scanf("%d",&stu1.roll);
printf("Enter student marks");
scanf("%f",&stu1.marks);
printf("\n\nStudent details\n");
printf("Name:%s\n",stu1.name);
printf("Roll No:%d\n",stu1.roll);
printf("Marks:%2f\n",stu1.marks);
getch();
return 0;
}