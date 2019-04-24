#include<iostream>
using namespace std;
int main()
{
	int n;
	string s;
	cout<<"num of string u want to enter ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cout<<"enter strings ";
	cin>>s;
		cout<<"reverse is ";
		for(int j=s.length();j>=0;j--)
		{
			cout<<s[j];	
		}
		cout<<" ";
		cout<<endl;
	}
}
