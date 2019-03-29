#include<iostream>
using namespace std;
void print(int [],int);
int main()
{
	int arr[]={5,10,15,20,25,30};
	int length=6;
	print(arr,length);	
	return 0;
}
void print(int a[],int l)
{
	for(int i=0;i<l;i++)
	{
		cout<<a[i]<<" is on "<<i+1<<" index value "<<endl;
	}
	
}
