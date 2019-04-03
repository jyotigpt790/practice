#include<iostream>
using namespace std;
int main()
{
	//count num of digits
	int num,i,count=0;
	cin>>num;
	for(i=0;num!=0;i++)
	{
	num=num/10;
	count++;
	}
	cout<<"num of digit are "<<count;
return 0;
}
