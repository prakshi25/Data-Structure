#include<iostream>
using namespace std;

int main()
{

	int i,n,a[100],position,x;
	
	cout<<"Enter The Value Of N:";
	cin>>n;
	
	cout<<"Enter The Values Of Array:"<<endl;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int ch;
	
	while(1)
	{
		cout<<"\nPress 1 for INSERT";
		cout<<"\nPress 2 for DELETE";
		cout<<"\nPress 3 for READ"; 
		cout<<"\nPress 4 for DISPLAY"; 
		cout<<"\nPress 5 for SEARCH"; 
		cout<<"\nPress 6 for EXIT";
		cout<<"\nENTER YOUR CHOICE:";
		cin>>ch;    
	
	switch(ch)
	{
		case 1:
		cout<<"Enter The Position At Which You Want To Enter Array Value:";
		cin>>position;
	
		cout<<"Enter The Array Value:"<<endl;
		cin>>x;
	
		for(i=n;i>=position;i--)
		{
			a[i]=a[i-1];
		}
	
		a[position]=x;
		n=n+1;
	
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<endl;    
		}
			break;

		case 2:
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
			break;
			
		case 3:
		cout<<"Enter The Value Of N:";
		cin>>n;
	
		cout<<"Enter The Values Of Array:"<<endl;
	
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
			break;
			
		case 4:
		cout<<"Array Values: "<<endl;
	
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<endl;
		}	
			break;
			
		case 5:
			
			break;
			
		case 6:
			exit(0);
			
		default:
			cout<<"\nINVALID OPTION";
	}
}
return 0;
}
