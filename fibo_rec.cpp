#include<iostream>
using namespace std;
int fib(int);
int main()
{
	//fibonacci series using recursion
	int num,result;
	cout<<"enter num ";
	cin>>num;
	if(num>0)
	{
		result=fib(num);
		cout<<endl<<"on "<<num<<" fibonacci have "<<result;
	}
	else
	{
		cout<<"wrong input";
	}
}
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return (fib(n-1)+fib(n-2));
}

