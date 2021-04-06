#include<iostream>
#define N 5
using namespace std;

int Queue[N];
int REAR=-1,FRONT=-1;

void enqueue()
{
	int x;
	
	if(REAR<N-1)
	{
		cout<<"Enter The Value Of X:";
		cin>>x;
		
		if(FRONT==-1)
		{
			FRONT=0;
		}
		
		REAR++;
		Queue[REAR]=x;
		cout<<"\nAfter deleletion FRONT at "<<FRONT<<" AND REAR AT "<<REAR;
	}
	
	else
	{
		cout<<"Queue OverFLOW";
	}
	
}

void print()
{
	int i;
	cout<<"\nFRONT at "<<FRONT<<" AND REAR AT "<<REAR;
	cout<<"\nValues\n";
	for(i=FRONT;i<=REAR;i++)
	{
		cout<<"["<<Queue[i]<<"] ==>";
	}
}

void dqueue()
{
	if(FRONT>=0)
	{
		cout<<"\nDeleted element is "<<Queue[FRONT];
		FRONT++;
		cout<<"\nAfter deleletion FRONT at "<<FRONT<<" AND REAR AT "<<REAR;
	}
	else
	{
		cout<<"\nQueue Underflow";
	}
}

int main()
{
	int ch;


	do
	{	
	cout<<"\nPRESS 1 FOR INSERT\nPRESS 2 FOR DELETE\nPRESS 3 FOR PRINT\nPRESS 4 FOR EXIT\nENTER CHOICE:";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
				enqueue();
				break;
		case 2:
				dqueue();
				break;
		case 3:
				print();
				break;
		default:
				cout<<"\nWrong opt";
	}
	
	}while(ch!=4);	
}
