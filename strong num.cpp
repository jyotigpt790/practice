#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int num,temp;
	int sum=0;
	cout<<"enter a number you want to check ";
	cin>>num;
	temp=num;
	while(temp>0)
	{
		sum=sum+fact(temp%10);
		temp=temp/10;
	}
		if(sum==num)
	{
		cout<<"num is strong";
	}
	else
	{
		cout<<"num is not strong";
	}
return 0;
}
int fact(int num)
	{
		if(num==1||num==0)
			return 1;
		else
			return num*fact(num-1);
	}
