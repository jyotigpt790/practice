#include<iostream>
using namespace std;
int main()
{
	int age;
	
	//nested if else
	cout<<"enter your age ";
	cin>>age;
	if(age<14)
	{cout<<"you are child";
	
	 }
	 else if(14<=age&&age<=19) 
	 {
	 	cout<<"you are teenage";
	 	
	 }
	 else if(20<=age&&age<=30)
	 {
	 	cout<<"you are in  middle age";
	 }
	 else
	 cout<<"you are old";
	 
	
}
