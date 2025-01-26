#include<iostream.h>
#include<stdio.h>
struct student
{
   int rn;
   char name[20];
   int m[3];
   int tot;
   float per;
}std[2];
int main()
{
int i,j;
clrscr();
for(j=0;j<2;j++)
{
	std[j].tot=0;
	cout<<"Enter roll no. and name"<<endl;
	cin>>std[j].rn>>std[j].name;
	cout<<"Marks of three subject"<<endl;
	for(i=0;i<3;i++)
	{
	  cin>>std[j].m[i];
	  std[j].tot=std[j].tot+std[j].m[i];
	}
	cout<<"Enter Details"<<endl;
	cout<<"Roll No."<<std[j].rn<<endl;
	cout<<"Name of student "<<std[j].name<<endl;
	for(i=0;i<3;i++)
	{
	  cout<<"rn="<<std[j].m[i]<<endl;
	}
	cout<<"tot="<<std[j].tot<<endl;
	std[j].per=(float)std[j].tot/3;
	cout<<"per="<<std[j].per<<endl;
}
return 0;
}
