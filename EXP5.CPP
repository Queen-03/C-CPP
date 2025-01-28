#include<iostream.h>
#include<conio.h>
class number
{
	private:
		int n1,n2;
	public:
		number(int x,int y)
		{
		n1=x;
		n2=y;
		}
		void showdata()
		{
		cout<<"Addition of "<<n1<<" and "<<n2<<" is = "<<n1+n2<<endl;
		}
};
   void main()
   {
   clrscr();
   number N1=number(100,20);
   number N(12,130);
   N1.showdata();
   N.showdata();
   getch();
   }