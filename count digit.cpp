#include<iostream>
using namespace std;
int main()
{
	int c=0,i=0,num,x;
	cout<<"enter number ";
	cin>>num;
	while(i<num)
	{x=num%10;
	num=num/10;
	c++;
		}
		cout<<c<<"num of digit";
}
