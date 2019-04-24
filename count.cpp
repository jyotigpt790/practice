#include<iostream>
using namespace std;
int main()
{
	int c=0,i=1,num,x;
	cout<<"enter ";
	cin>>num;
	while(i<num)
	{x=num%10;
	num=num/10;
	c++;
		}
		cout<<c;
}
