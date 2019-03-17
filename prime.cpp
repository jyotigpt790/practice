#include<iostream>
using namespace std;
int main()
{
		int num;
		int count=0,i=1;
		cout<<"enter a number you want to check prime or not "<<endl;
		cin>>num;
	while(i<=num)	
		{ if(num%i==0)
			{
			count++;
			}
			i++;
		}
	if(count>2)
	{
		cout<<"num is non prime";
	}
	else
	cout<<"num is prime";
		
}
