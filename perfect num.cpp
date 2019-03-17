#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int num,i=1;
	cout<<"enter num you want to check"<<endl;
	cin>>num;
	while(i<num)
	{
		if(num%i==0)
		{
			sum=sum+i;
			cout<<"factor is "<<i<<endl;
		}
		i++;
	}
	if(sum==num)
	{
		cout<<"num is perfect";
	}
	else
	cout<<"not perfect";
	
}
