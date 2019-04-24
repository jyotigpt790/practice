#include<iostream>
using namespace std;
class constructor{
private:
	int a,b;

	
public:	
constructor(){
 	cout<<"constructor called now "<<endl;
 }

	void display()
	{
		cout<<"display called after constructor call";
	}
};
 
int main()
{
	constructor c1;
	c1.display();
	return 0;
}
