#include<iostream>
using namespace std;
int swap(int *x,int *y);
int main()
{
	int a=10,b=20;
	cout<<"a is "<<a<<endl;
	cout<<"b is "<<b<<endl;
	swap(&a,&b);
	cout<<"a is "<<a<<endl;
	cout<<"b is "<<b<<endl;
	
	return 0;
}

int swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
