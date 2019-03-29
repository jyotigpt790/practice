#include<iostream>
using namespace std;
int main()
{	int input,temp;
	int *ptr=NULL;
	cout<<"enter number of values you want to enter ";
	cin>>input;
	ptr=new int [input];
	
		for(int count=0;count<input;count++)
		{
			cout<<"enter item ";
			cin>>temp;
			*(ptr+count)=temp;
		}
		cout<<"item you have entered are "<<endl;
		for(int count=0;count<input;count++)
		{
			cout<<count+1<<" item is "<<*(ptr+count)<<endl;
		}
		delete ptr;
		return 0;
}
