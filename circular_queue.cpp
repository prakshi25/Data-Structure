#include<iostream>
#define N 5
using namespace std;

int CQ[N];
int REAR=-1,FRONT=-1;

void push()
{
	int x;	
	if(REAR==N-1)
		REAR=1;
	else
		REAR=REAR+1;
		if(FRONT==REAR)
		{
			cout<<"\nQUEUE IS OVERFLOW\n";
			
			if(REAR==1)
				REAR=N-1;
			else
				REAR=REAR-1; 
		}
		
		cout<<"Enter The Value Of X:";
		cin>>x;
		
		CQ[REAR]=x;
		
	if(FRONT==0)
	FRONT=1;
}

void print()
{
	int i;
	
	if((FRONT==0)&&(REAR==0))
		cout<<"\nQUEUE IS EMPTY";
		
	else
	{
		
	for(i=FRONT;i<=REAR;i++)
	{
		cout<<"["<<CQ[i]<<"] ==>";
	}
	
	}
}

void pop()
{
	if((FRONT==-1)||(FRONT==0))
	{
		cout<<"\nQUEUE IS UNDERFLOW\n";
		
	}
		cout<<"\nDeleted element is "<<CQ[FRONT];
	
	if(FRONT==REAR)
		FRONT=REAR=0;
		
	if(FRONT==N-1)
		FRONT=1;
		
	else
		FRONT=FRONT+1;
}

int main()
{
	int ch;


	do
	{	
	cout<<"\nPRESS 1 FOR PUSH\nPRESS 2 FOR POP\nPRESS 3 FOR PRINT\nPRESS 4 FOR EXIT\nENTER CHOICE:";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
				push();
				break;
		case 2:
				pop();
				break;
		case 3:
				print();
				break;
		default:
				cout<<"\nWrong opt";
	}
	
	}while(ch!=4);	
}
