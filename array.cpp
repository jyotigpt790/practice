#include<iostream>
using namespace std;
int main()
{
	int marks[]={5,10,20,30};
	int n[3];
	cout<<marks[0]<<" is your first digit on index"<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<"your "<<i<<" digit is "<<marks[i]<<endl; 
		
	}
	cout<<"enter marks of 3 student ";
	for(int j=0;j<3;j++)
	{
		cin>>n[j];
		cout<<endl<<" your entered digit is "<<n[j]<<endl;
	}
	}
