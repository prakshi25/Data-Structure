#include<iostream>
using namespace std;

int main()
{
	int i,n,m,a[100],b[100],c[100];
	
	cout<<"Enter The Value Of N:";
	cin>>n;
	
	cout<<"Enter The Values Of Array:";
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Array Values: ";
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
	cout<<"Enter The Value Of M:";
	cin>>m;
	
	cout<<"Enter The Values Of Array:";
	
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	
	cout<<"Array Values: ";
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	
	for(i=0;i<m;i++)
	{
		c[i+n]=b[i];
	}
	
    for(i=0;i<n+m;i++)
    {
    	cout<<c[i]<<endl;
	}
}
