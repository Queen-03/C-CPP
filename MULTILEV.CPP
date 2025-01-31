#include<iostream.h>
#include<conio.h>
class student
{
	protected:
		int rn;
		char nm[30];
	public:
		void getstudent()
		{
			cout<<"Enter Roll No. and name"<<endl;
			cin>>rn>>nm;
		}
		void showstudent()
		{
			cout<<"Roll No.="<<rn<<endl;
			cout<<"Name="<<nm<<endl;
		}
};
class subject:public student
{
	protected:
		int p,c;
	public:
		void getsubject()
		{
			student::getstudent();
			cout<<"Enter Marks of physics and chem"<<endl;
			cin>>p>>c;
		}
		void showsubject()
		{
			student::showstudent();
			cout<<"Physics="<<p<<endl;
			cout<<"Chem="<<c<<endl;
		}
};
class result:public subject
{
	private:
		int tot;
		float per;
	public:
		void getresult()
		{
			subject::getsubject();
			tot=p+c;
			per=tot/2;
		}
		void showresult()
		{
			subject:showsubject();
			cout<<"Total="<<tot<<endl;
			cout<<"Percentage="<<per<<endl;
		}
};
    void main()
    {
	result r;
	clrscr();
	r.getresult();
	cout<<"********** Student Information **********"<<endl;
	r.showresult();
	getch();
    }
