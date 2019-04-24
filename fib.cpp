#include<iostream>
using namespace std;
int fun(int);
int main()
{	
int num,res;
	cout<<"enter a num ";
	cin>>num;
	res=fun(num);
	cout<<"result is "<<res;
}
int fun(int n)
{
	if(n==0) return 0;
	else if(n==1)return 1;
	else{
		return fun(n-1)+fun(n-2);
	}
}
