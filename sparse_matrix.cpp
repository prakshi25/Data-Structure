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
			
			if(mat[i][j]==0)
			{
				flag++;
			}
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
	
	
	if(flag>(9/2))
	{
		cout<<"\nSparse Matrix";
	}
	
	else
	{
		cout<<"\nNot A Sparse Matrix";
	}
	
}
