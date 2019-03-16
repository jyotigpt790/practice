#include<iostream>
using namespace std;
int addition(int *x,int *y);
int main()
{
	int a=5,b=10,c;
	cout<<"a+b is "<<a+b<<endl;
	cout<<"b-a is "<<b-a<<endl;
		addition(&a,&b);
}
int addition(int *x,int *y)
{
	*x=*x+*y;
	*y=*y-*x;
cout<<"x+y is "<<*x<<endl;
cout<<"y-x is "<<*y;
}
