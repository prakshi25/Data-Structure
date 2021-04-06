#include<iostream>
using namespace std;

int main()
{
	int m,n,mat[10][10];
	
	cout<<"Enter The Value Of M:";
	cin>>m;

	cout<<"Enter The Value Of N:";
	cin>>n;
	
	if(m==n)
	{
	
	cout<<"Enter The Matrix Values:";

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{	
			cin>>mat[i][j];
			
		}
	}
	
	cout<<"Matrix:"<<endl;

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{	
			cout<<mat[i][j];
		}
		
		cout<<"\n";
	}
	
	cout<<"\nSQUARE MATRIX"<<endl;
	
	}
	
	else
	{
		cout<<"\nNOT A SQUARE MATRIX"<<endl;
	}
	
}
