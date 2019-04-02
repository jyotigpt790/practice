#include<iostream>
using namespace std;
int fact(int);
int main()
{
	//recursion
	int result,n;
	cout<<"enter num you want factorial ";
	cin>>n;
	result=fact(n);
	cout<<result;
}
int fact(int num)
{
	if(num==1)
	{
		return num;
	}
	else
	{
		return num*fact(num-1);
	}
}
