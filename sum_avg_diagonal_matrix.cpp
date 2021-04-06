#include<iostream>
using namespace std;

int main()
{
	int mat[3][3],s=0;
	float avg=0;

	cout<<"Enter The Matrix Values:";

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{	
			cin>>mat[i][j];
		}
	}

	cout<<"Matrix:"<<endl;

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{	
			cout<<mat[i][j];
		}
		
		cout<<"\n";
	}

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{	
			if(i==j)
			{
				s=s+mat[i][j];
				avg=s/3;
			}
		}
	}

	cout<<endl<<"SUM:"<<s<<endl;
	cout<<endl<<"AVERAGE:"<<avg<<endl;
}