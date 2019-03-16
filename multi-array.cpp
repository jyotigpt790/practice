#include<iostream>
using namespace std;
int main()
{
		int n[3][2]={{2,3},{15,13},{20,13}};
		int marks[2][2];
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<2;j++)
			{
		cout<<"values are "<<n[i][j]<<endl;
			}
		}
		cout<<"enter next array of 2 2 is ";
		for(int k=0;k<2;k++)
		{
			for(int m=0;m<2;m++)
			{
				cin>>marks[k][m];
			}
		}
		
}
