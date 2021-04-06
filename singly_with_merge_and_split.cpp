#include<iostream>
using namespace std; 
#include<stdlib.h> 
 
struct node 
{ 
	int data; 
	struct node *next; 
}*Head1,*Head2;
 
void create1();
void create2(); 
void print1();
void print2(); 
void merge(); 
void split(); 
 
int main() 
{ 
	int ch;  
	
	Head1=NULL;
	Head2=NULL;
 
 	while(1)  
	{  
		cout<<"\npress 1 for Create First List";  
		cout<<"\npress 2 for Create Second List";  
		cout<<"\npress 3 for Print First List";  
		cout<<"\npress 4 for Print Second List"; 
		cout<<"\npress 5 for Merge";  
		cout<<"\npress 6 for Split";  
		cout<<"\npress 7 for Exit";  
		
		cout<<"\nEnter Your Choice:";  
		cin>>ch; 
 
 	switch(ch)  
	{  
		case 1:   
		create1();   
		break;  
		
		case 2:   
		create2();   
		break;  
		
		case 3:   
		print1();   
		break;  
		
		case 4:   
		print2();   
		break;  
		
		case 5:   
		merge();   
		break;  
		
		case 6:   
		split();   
		break;  
		
		case 7:   
		exit(0);  
		default:   
		
		cout<<"\nWrong option";  
		
	}
	
	}
	
	return 0;
}

void create1() 
{
 	struct node *tmp,*q;
	int value1;
		
	cout<<"\nENTER VALUE:";
	cin>>value1;
	
	tmp=(struct node*)malloc(sizeof(tmp));
	tmp->data=value1;
	tmp->next=NULL;
	
	if(Head1==NULL)
	{
		Head1=tmp;	
	}
	
	else
	{
		q=Head1;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		
		q->next=tmp;
	}
}

void create2() 
{
 	struct node *tmp,*q;
	int value2;
		
	cout<<"\nENTER VALUE:";
	cin>>value2;
	
	tmp=(struct node*)malloc(sizeof(tmp));
	tmp->data=value2;
	tmp->next=NULL;
	
	if(Head2==NULL)
	{
		Head2=tmp;	
	}
	
	else
	{
		q=Head2;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		
		q->next=tmp;
	}
}

void print1()
{
	struct node *q;
	
	if(Head1==NULL)
	{
		cout<<"\nTHERE ARE NO ITEMS";	
	}
		
	else
	{
		q=Head1;
		cout<<"\n ITEMS:\n";
		
		while(q!=NULL)
		{
			cout<<"\t-->"<<q->data;
			q=q->next;
		}
		
	}
}

void print2()
{
	struct node *q;
	
	if(Head2==NULL)
	{
		cout<<"\nTHERE ARE NO ITEMS";	
	}
		
	else
	{
		q=Head2;
		cout<<"\n ITEMS:\n";
		
		while(q!=NULL)
		{
			cout<<"\t-->"<<q->data;
			q=q->next;
		}
		
	}
}

void merge()
{
	struct node *q;
	q=Head1;
	
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->next=Head2;
}

void split()
{
	struct node *q;
	int pos;
	
	cout<<"\nEnter Position From Where You Want To Split:";
	cin>>pos;
	
	q=Head1;
	
	for(int i=0;i<pos-1;i++)
	{
		q=q->next;
	}
	Head2=q->next;
	q->next=NULL;
}

