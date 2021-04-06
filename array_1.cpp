#include<iostream>
using namespace std;

int main()
{
	int i,a[5];
	
	cout<<"Enter The Values Of Array:";
	
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Array Values: ";
	
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
}
