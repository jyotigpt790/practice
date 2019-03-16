#include<iostream>
using namespace std;
int addition(int,int);
int main()
{	int a=5,b=15;
	int c=addition(a,b);
	cout<<"addition is "<<c;
}
int addition(int a,int b)
{	cout<<"add is "<<a+b<<endl;
 return a+b;

}
