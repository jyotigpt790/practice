#include<iostream>
using namespace std;
class firstclass
{	
	private:
		int age,rollno;
		string name;
		char grade;
	public:
		int setage(int set_age,int set_rollno)
		{
			age=set_age;
			rollno=set_rollno;
		}
		int setname(string set_name,char set_grade)
		{
			name=set_name;
			grade=set_grade;
		}
		void display()
		{
			cout<<"Name of student is "<<name<<endl<<" Age of student is "<<age<<endl;
			cout<<"Rollnumber is "<<rollno<<endl<<" Over all grade is "<<grade<<endl;
		}
};
int main()
{
	firstclass f1;
	
	f1.setage(15,200);
	f1.setname("anita",'A');
	f1.display();
	return 0;
}
