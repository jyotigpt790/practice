#include<iostream>
using namespace std;
int main()
{
	int a,b;
for(int i=0;i<=100;i++)
{

	cout<<"enter number you want to verify"<<endl;
	cin>>a;
	if(a%2==0)
	{
		cout<<"number is even"<<endl;
cout<<"if you want to exit press 5 otherwise press any key";
cin>>b;
if(b==5)
{
	break;
}
		
	}
	else
	{
		cout<<"number is odd"<<endl;
cout<<"if you want to exit press 5 otherwise press any key";
cin>>b;
if(b==5)
{
	break;
}

	}
}
}
