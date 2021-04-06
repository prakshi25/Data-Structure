#include<iostream>
using namespace std;

int main()
{
	int mat[3][3],flag;

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
				if(mat[i][j]==0)
				{
					flag=1;
				}
			}

			else
			{
				if(mat[i][j]!=0)
				{
					flag=1;
				}
			}
		}
	}

	if(flag==1)
	{
		cout<<"NOT A Diagonal Matrix"<<endl;
	}

	else
	{
		cout<<"Diagonal Matrix"<<endl;
	}
}
