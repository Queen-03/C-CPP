#include<iostream.h>
#include<conio.h>
struct student
{
	int rn;
	char name[13];
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
	 cout<<"Enter Roll No and Name:"<<endl;
	 cin>>std[j].rn>>std[j].name;
	 cout<<"Marks of Three Subject:"<<endl;
	 for(i=0;i<3;i++)
	 {
	   cin>>std[j].m[i];
	   std[j].tot=std[j].tot+std[j].m[i];
	 }
	 cout<<"Enter Details"<<endl;
	 cout<<"Roll No:"<<std[j].rn<<endl;
	 cout<<"Name of Student:"<<std[j].name<<endl;
	 for(i=0;i<3;i++)
	 {
	   cout<<"Marks of Three Subject="<<std[j].m[i]<<endl;
	 }
	 cout<<"Total="<<std[j].tot<<endl;
	 std[j].per=(float)std[j].tot/3;
	 cout<<"Percentage="<<std[j].per<<endl;
       }
       getch();
       return 0;
  }
