#include<iostream.h>
#include<conio.h>
int main()
{
  int a[10],i,n,p;
  cout<<"Enter the Number of element(max 10):"<<endl;
  cin>>n;
  clrscr();
  if(n>10)
  {
    cout<<"Number of element cannot exceed 10"<<endl;
    return 1;
  }
  cout<<"Enter the Elements:"<<endl;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  if(n==10)
  {
    cout<<"Array is full."<<endl;
  }
  else
  {
    cout<<"Enter the element to be inserted:"<<endl;
    cin>>p;
    for(i=n;i>0;i--)
    {
      a[i]=a[i-1];
    }
    a[0]=p;
    n++;
    cout<<"After insertion elements are:"<<endl;
    for(i=0;i<n;i++)
    {
      cout<<a[i]<<"\t";
    }
    cout<<endl;
    }
 getch();
 return 0;
}
