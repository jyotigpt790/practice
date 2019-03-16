#include<iostream>
using namespace std;
int display(int,int);
int main()
{	int i;
	//parameter passing(value passing)
	i=display(10,20);
	cout<<" addition is "<<i;
}
int display(int a,int b)
{	int temp;
	temp=a+b;
	return temp;

}
