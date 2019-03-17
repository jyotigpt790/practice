#include<iostream>
using namespace std;
int main()
{
		int n,i;
		cout<<"enter a number you want to find fact ";
		cin>>n;
		i=n-1;
		while(i>=1)
		{
		n=n*(i);	
		i--;
		}
	cout<<"fact is "<<n;
}
