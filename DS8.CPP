#include<iostream.h>
#include<conio.h>
// using namespace std;

int main()
{
	int i;
	int j;
	int temp;
	int arr[5]={12,3,4,5,6};
	clrscr();

	cout<<"Unsorted array: \n";
	for(i=0;i<5;i++)
		cout<<arr[i]<<"\t";
		cout<<endl;

	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
		   if(arr[j] < arr[i]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		   }
		}
	}
	cout<<"Sorted array:\n";
	for(i=0;i<5;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	getch();
	return 0;
}