#include<iostream>
using namespace std;

void linearSearch(int[10],int,int);

int main()
{
	int list[100],size,number;
	
	cout<<"Enter The Size Of The List: ";
   	cin>>size;
 
   	cout<<"Enter Values: "<<endl;
   
   	for (int i=0;i<size;i++)
	{
   		cin>>list[i];
	}
	
	cout<<"Enter The Value You Want To Search:";
	cin>>number;
	
	linearSearch(list,size,number);	
}

void linearSearch(int list[10],int size,int number)
{
	int flag=0,i;
	
	for(int i=0;i<size;i++)
	{
		if(list[i]==number)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==0)
	{
		cout<<"Error! Value Not Found";
	}
	
	else
	{
		cout<<"Value Found At Position: ";
		for(int i=0;i<size;i++)
		{
			if(list[i]==number)
			{
				cout<<i+1;
			}
		}
	}
		
}
