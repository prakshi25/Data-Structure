#include<iostream>
#define N 5
using namespace std;

int stack[N];
int TOP=-1;

void push()
{
	int x;
	
	if(TOP<N-1)
	{
		cout<<"Enter The Value Of X:";
		cin>>x;
		
		TOP++;
		stack[TOP]=x;
		cout<<"\nAfter insertion top at "<<TOP;
	}
	
	else
	{
		cout<<"Stack Overflow";
	}
	
}

void print()
{
	int i;
	cout<<"\nValues\n";
	for(i=TOP;i>=0;i--)
	{
		cout<<"\n["<<stack[i]<<"]";
	}
}

void pop()
{
	if(TOP>=0)
	{
		cout<<"\nDeleted element is "<<stack[TOP];
		TOP--;
		cout<<"\nAfter deleletion top at "<<TOP;
	}
	else
	{
		cout<<"\nUnderflow";
	}
}

int main()
{
	int ch;


	do
	{	
	cout<<"\nPRESS 1 FOR PUSH\nPRESS 2 FOR POP\nPRESS 3 FOR PRINT\nPRESS 4 FOR EXIT\nEnter =>";
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
