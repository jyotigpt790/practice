#include<iostream>
using namespace std;
int main()
{
	int a,b,c,breakk;
	char sym;
	cout<<"enter first number "<<endl;
	cin>>a;
	cout<<"enter symbol "<<endl;
	cin>>sym;
	cout<<"enter second number "<<endl;
	cin>>b;
	switch (sym)
{	case '+':
	{	c=a+b;
	cout<<"sum is "<<c;	
	break;	
	}
	case '-':
	{
			c=a-b;
	cout<<"subtract is "<<c;
	break;	
	}
	case '*':
	{

		c=a*b;
	cout<<"multiple is "<<c;
			break;	
	}
	case '/':
	{
		c=a/b;
	cout<<"division is "<<c;
			break;
	}
	default :
	cout<<"invalid";
}
}
