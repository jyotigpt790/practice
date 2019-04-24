#include<iostream>
using namespace std;
class human{
	public:
		human()
		{
			cout<<"constructor called"<<endl;
		}
		~human()
		{
			cout<<"destructor called"<<endl;
		}
		void disp()
		{
			cout<<"display called"<<endl;
		}
};
int main()
{
	human h1;
	h1.disp();
	return 0;
}
