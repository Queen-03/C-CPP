#include<iostream.h>
#include<conio.h>
class addition
{
	private:
		int a,b,c;
	public:
		void getdata()
		{
		  cout<<"Enter value of a and b"<<endl;
		  cin>>a>>b;
		}
		void putdata();
};
   void addition :: putdata()
   {
   c=a+b;
   cout<<"Addition= "<<c<<endl;
   }
void main()
{
  addition add;
  clrscr();
  add.getdata();
  add.putdata();
  getch();
}
