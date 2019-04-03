#include<bits/stdc++.h>
using namespace std;
int cmp_triplet(int [],int []);
int main()
{	int i=0;
	int result;
	int a[3],b[3];
	cout<<"enter three number for matrix a"<<endl;
	while(i<3)
	{
	cin>>a[i];
	i++;
	}
	cout<<"enter three no. for matrix b"<<endl;
	i=0;
	while(i<3)
	{
	cin>>b[i];
	i++;
	}
	cout<<"[";
	for(i=0;i<3;i++)
		cout<<a[i]<<" ";
	cout<<"]";	
		cout<<endl;
	cout<<"[";
	for(i=0;i<3;i++)
		cout<<b[i]<<" ";
		
	cout<<"]";	
	for(i=0;i<3;i++)
	{
result=cmp_triplet(&a[i],&b[i]);
	}
}



int cmp_triplet(int *a,int *b)
{
	int bcount=0,acount=0;
	for(int i=0;i<3;i++)
	{
		if(a[i]<b[i])
		{
			bcount++;
		}
		else if(a[i]>b[i])
		{
			acount++;
		}
		else
		{
			cout<<"no rating";
		}
		
	}
}
