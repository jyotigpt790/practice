#include<iostream>
using namespace std;
int main()
{
	//and or not ternary operators
	int year;
	string place,state;
	cout<<"person document year is ";
	cin>>year;
	year>1971?cout<<"your documents are not valid for NRC ":cout<<"your document are valid CONGRATS!!!"<<endl;
	cout<<"check for your NRC confirmation enter your state and place ";
	cin>>state;
	cin>>place;
	
	if(state=="assam"){
	if(place=="dispur"||place=="golaghat")
	{
		cout<<"your confirmation is in progress";
	}
	else
	{
		cout<<"please enter valid place";
		
	}
}
	

	else
	{
	
	
		cout<<"please wait for nrc in your state ";
	}
}
