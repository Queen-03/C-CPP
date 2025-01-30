#include<iostream.h>
#include<conio.h>
class number
{
	private:
		static int a,b;
	public:
		static void display()
		{
			cout<<"Value of a="<<a<<endl;
			cout<<"Value of b="<<b<<endl;
		}
};
     int number::a=35;
     int number::b=78;
void main()
{
clrscr();
number::display();
getch();
}