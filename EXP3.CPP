#include<iostream.h>
#include<conio.h>
class student
{
	private:
	   int a,b;
	   float avg;
	public:
	   void get()
	   {
	      cout<<"Enter value of a and b"<<endl;
	      cin>>a>>b;
	   }
	   friend void result(student s);
};
void result(student s)
{
  s.avg=(float)(s.a+s.b)/2;
  cout<<"Average="<<s.avg<<endl;
}
void main()
{
  student std,std1;
  clrscr();
  std.get();
  result(std);
  std1.get();
  result(std1);
  getch();
}