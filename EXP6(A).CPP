#include<iostream.h>
#include<conio.h>
class simple
{
	private:
		static int x,y;
	public:
		void display()
		{
			cout<<"Value of x="<<x<<endl;
			cout<<"value of y="<<y<<endl;
		}
};
	int simple::x=100;
	int simple::y=200;
void main()
{
simple s;
clrscr();
s.display();
getch();
}