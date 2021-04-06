#include<iostream>
using namespace std;

int main()
{
	int i,n,a[100],position;
	
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
	
	cout<<"Enter The Position At Which You Want To Delete Array Value:";
	cin>>position;
	
	for(i=position;i<n;i++)
	{
		a[i]=a[i+1];
	}
	
	n=n-1;
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;    
	}
	
}
