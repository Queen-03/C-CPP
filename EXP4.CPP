#include<iostream.h>
#include<conio.h>
class Add1
{
	private:
		int n1,n2;
	public:
		void get()
		{
		   cout<<"Enter Value of n1 and n2:"<<endl;
		   cin>>n1>>n2;
		}
		friend class Add2;
};
class Add2
{
	private:
		int tot;
	public:
		void put(Add1 obj)
		{
		   tot=obj.n1+obj.n2;
		}
		void show()
		{
		   cout<<"Total= "<<tot<<endl;
		}
};
  void main()
  {
  Add1 add;
  Add2 add1;
  clrscr();
  add.get();
  add1.put(add);
  add1.show();
  getch();
}

