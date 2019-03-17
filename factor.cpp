#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int num,i=1;
	cout<<"enter num"<<endl;
	cin>>num;
	while(i<=num)
	{
		if(num%i==0)
		{
		cout<<"factor of no. is "<<i<<endl;
		}
	i++;
	}
	
}
