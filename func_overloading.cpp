#include<iostream>
using namespace std;
int display()
{
	cout<<"display without parameter"<<endl;
}

int display(int)
{
	cout<<"display with single para"<<endl;
}
int display(int,char)
{
	cout<<"display with two para"<<endl;
}
int main()
{//function overloading
	display();
	display(15);
	display(15,'a');
	return 0;
}
