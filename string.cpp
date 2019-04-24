#include<iostream>
#include<string>
using namespace std;
int main()
{
	string first_name;
	string Last_name;
	cout<<"enter your full name";
	cin>>first_name>>Last_name;
	if(first_name=="jyoti"||first_name=="JYOTI")
		{
		if(Last_name=="gupta"||Last_name=="GUPTA")
		cout<<"your full name is jyoti gupta";
		else
		cout<<"last name miss match";
		}
	else
	cout<<"name miss match";
return 0;
}
