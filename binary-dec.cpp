#include<bits/stdc++.h>
using namespace std;
int main()
{
	//binary to decimal
	int sum=0;
	int n,m;
	cout<<"enter binary num you want to convert "<<endl;
	cin>>n;
	for(int i=0;n!=0;i++)
		{
		m=n%10;
		if(m==1||m==0)
			{
			
			sum=sum+(m*(pow(2,i)));
			
			n=n/10;
			}
			else
			{
				cout<<"enter a binary num ";
				break;
			}
		}
		cout<<"conversion into decimal is "<<sum;
	return 0;

}
