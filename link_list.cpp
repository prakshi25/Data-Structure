#include<iostream>
using namespace std;
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*Head;

void create();
void print();
int count();
void delF();
void delA();
void delL();
void insF();
void insA();
void insL();

int main()
{
	int ch;
	
	Head=NULL;
	
	while(1)
	{
		cout<<"\npress 1 for Create";
		cout<<"\npress 2 for Print";
		cout<<"\npress 3 for Count"; 
		cout<<"\npress 4 for DelF"; 
		cout<<"\npress 5 for Exit"; 
		cout<<"\npress 6 for DelA"; 
		cout<<"\npress 7 for DelL"; 
		cout<<"\npress 8 for InsF"; 
		cout<<"\npress 9 for InsA";
		cout<<"\npress 10 for InsL";
		cout<<"\nENTER YOUR CHOICE:";
		cin>>ch;    
	
	switch(ch)
	{
		case 1:
			create();
			break;

		case 2:
			print();
			break;
			
		case 3:
			count();
			break;
			
		case 4:
			delF();
			break;
			
		case 5:
			exit(0);
			
		case 6:
			delA();
			break;
			
		case 7:
			delL();
			break;
			
		case 8:
			insF();
			break;
			
		case 9:
			insA();
			break;
			
		case 10:
			insL();
			break;

		default:
			cout<<"\nWRONG OPTION";
	}
}
return 0;
}

void create()
{
	struct node *tmp,*q;
	int value;
		
	cout<<"\nENTER VALUE:";
	cin>>value;
	
	tmp=(struct node*)malloc(sizeof(tmp));
	tmp->data=value;
	tmp->next=NULL;
	
	if(Head==NULL)
	{
		Head=tmp;	
	}
	
	else
	{
		q=Head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		
		q->next=tmp;
	}
}

void print()
{
	struct node *q;
	
	if(Head==NULL)
	{
		cout<<"\nTHERE ARE NO ITEMS";	
	}
		
	else
	{
		q=Head;
		cout<<"\n ITEMS:\n";
		
		while(q!=NULL)
		{
			cout<<"\t-->"<<q->data;
			q=q->next;
		}
		
	}
}

int count()
{
	struct node *q;
	int cnt=0;
	
	if(Head==NULL)
	{
		cout<<"\nTHERE ARE NO ITEMS";
	}
	
	else
	{
		q=Head;
		while(q!=NULL)
		{
			cnt++;
			q=q->next;
		}
	}
	return cnt;
}

void delF()
{
	struct node *tmp;
	
	if(Head==NULL)
	{
		cout<<"\nTHERE ARE NO ITEMS";	
	}
		
	else
	{
		tmp=Head;
		cout<<"\nRemoved Head->"<<Head->data;
		Head=Head->next;
		free(tmp);
	}
	
}

void delA()
{
	struct node *tmp,*q; 
 	int pos; 
 
	cout<<"\nEnter pos ->"; 
	cin>>pos; 
 
 
 	if(pos<count() && pos>0)  
	{ 
 		q=Head; 
 
 	for(int i=1;i<pos-1;i++)   
	{    
		q=q->next;   
	}  
		tmp=q->next;  
		cout<<"\nRemoved item = "<<tmp->data;  
		q->next=tmp->next;  
		free(tmp); 
 	} 
 
 	else  
	{   
		cout<<"\nNot possible";  
	}  
}

void delL()
{
	struct node *tmp,*q;
	
	if(Head==NULL)
	{
		cout<<"\nTHERE ARE NO ITEMS";	
	}
		
	else
	{
		q=Head;
		while(q->next->next!=NULL)
		{
			q=q->next;
		}
		
		tmp=q->next;
		cout<<"\nLast item and remove->"<<tmp->data;
		q->next=NULL;
		free(tmp);
	}

}

void insF()
{
	struct node *tmp;
	int value;
	
	cout<<"\nENTER THE VALUE:";
	cin>>value;
	
	tmp=(struct node*)malloc(sizeof(tmp));
	tmp->data=value;
	tmp->next=Head; 
	Head=tmp;
	cout<<"\nHEAD ADDED SUCCESSFULLY!\n";
	
}

void insA()
{
	struct node *q,*tmp; 
 	int pos,value; 
 
	cout<<"\nEnter pos ->"; 
	cin>>pos; 
 
 	if(pos<count())  
	{  
		q=Head;  
		cout<<"\nEnter value ->";  
		cin>>value; 
 
 		tmp=(struct node*)malloc(sizeof(tmp));  
		tmp->data=value; 
 
 	for(int i=1;i<pos;i++)   
	{   
		q=q->next;   
	} 
 
 	tmp->next=q->next;  
	q->next=tmp; 
 
 	}	  
	 
	else  
	{   
		cout<<"\nNot possible";  
	} 
}

void insL()
{
	struct node *tmp, *q;
	int value;
	
	if(Head==NULL)
	{
		cout<<"\nTHERE ARE NO ITEMS";	
	}
	
	else
	{
		q=Head;
		
		cout<<"\nENTER VALUE:";
		cin>>value;
	
		tmp=(struct node*)malloc(sizeof(tmp));
		tmp->data=value;
		tmp->next=NULL;

		while(q->next!=NULL)
		{
			q=q->next;
		}
		
		q->next=tmp;
	}
}
