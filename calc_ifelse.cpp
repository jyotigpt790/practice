#include<iostream>
using namespace std;
int main()
{
	char op;
	int a,b;
	cout<<"enter first number"<<endl;
	cin>>a;
	cout<<"enter operator"<<endl;
	cin>>op;
	cout<<"enter second number"<<endl;
	cin>>b;
	if(op=='+')
	{
		cout<<a+b<<" addition of given number";
	}
	else if(op=='-')
	{
			cout<<a-b<<" subtraction of given number";
	} 
	else if(op=='*')
	{
			cout<<a*b<<" multiplication of given number";
	}
	else
	{
	cout<<a/b<<" division of given number";
			
	}
	return 0;
}
