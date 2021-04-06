#include<iostream>
using namespace std;
#include<stdlib.h> 

struct node
{
	int data;
	struct node *next;
	struct node *prev;
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
		cout<<"\nPress 1 for Create";
		cout<<"\nPress 2 for Print";
		cout<<"\nPress 3 for Count"; 
		cout<<"\nPress 4 for DelF"; 
		cout<<"\nPress 5 for Exit"; 
		cout<<"\nPress 6 for DelA"; 
		cout<<"\nPress 7 for DelL"; 
		cout<<"\nPress 8 for InsF"; 
		cout<<"\nPress 9 for InsA";
		cout<<"\nPress 10 for InsL";
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
	 
	cout<<"\nEnter value ->"; 
	cin>>value; 
 
	tmp=(struct node*)malloc(sizeof(tmp)); 
	tmp->data=value; 
	tmp->next=NULL; 
	
	if(Head==NULL)
	{  
		tmp->prev=NULL;  
		Head=tmp;  	
	} 
	
	else  
	{  
		q=Head;  
		
		while(q->next!=NULL)   
		{   
			q=q->next;   
		}  
		
		tmp->prev=q;  
		q->next=tmp;  
		
	}  
}

void print()
{
	struct node *q; 
 
	if(Head==NULL)  
	cout<<"\nEmpty list"; 
	
	else  
	{   
		q=Head; 
 
  	cout<<"\nItems:"; 
 
  	while(q!=NULL)   
	{    
		cout<<"\t-->"<<q->data;    
		q=q->next;   
	}  
	
	} 
	
	cout<<endl;
}

int count()
{
	struct node *q; 
	int cnt=0; 
 
	if(Head==NULL)  
	cout<<"\nEmpty List"; 
	
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
		cout<<"\nEmpty List";
	}
	
	else
	{
		tmp=Head;
		Head=Head->next;
		Head->prev=NULL;
		free(tmp);
		cout<<"\nHead is deleted";
	}
	
}

void delA()
{
	struct node *tmp,*q;
	int value;
	
	if(Head==NULL)
	{
		cout<<"\nEmpty List";
	}
	
	else
	{
		int pos;
		
		cout<<"\nEnter Pos ->";
		cin>>pos;
		
		if(pos<count())
		{
			q=Head;
			
			for(int i=1;i<pos-1;i++)
			{
				q=q->next;
			}
			
			tmp=q->next;
			
			q->next=tmp->next;
			q->next->prev=q;
			
			free(tmp);
		}
		
		else
		{
			cout<<"\nNot Possible";
		}
	}
}

void delL()
{
	struct node *tmp,*q;
	
	if(Head==NULL)
	{
		cout<<"\nEmpty List";
	}
	
	else
	{
		q=Head;
		while(q->next->next!=NULL)
		{
			q=q->next;
		}
		tmp=q->next;
		q->next=NULL;
		free(tmp);
		cout<<"\nLast is deleted";
	}
}

void insF()
{
	struct node *tmp;
	int value; 
 
	cout<<"\nEnter value ->"; 
	cin>>value; 
 
	tmp=(struct node*)malloc(sizeof(tmp)); 
	tmp->data=value; 
	tmp->prev=NULL; 
 
	if(Head==NULL)  
	{  
		cout<<"\nEmpty List";  
	} 
	
	else  
	{  
		tmp->next=Head;  
		Head->prev=tmp;  
		Head=tmp;  
		cout<<"\nInserted at 1st";  
	} 
}

void insA()
{
	struct node *tmp,*q;
	int value;
	
	if(Head==NULL)
	{
		cout<<"\nEmpty List";
	}
	
	else
	{
		int pos;
		
		cout<<"\nEnter Position ->";
		cin>>pos;
		
		if(pos<count())
		{
			cout<<"\nEnter Value ->";
			cin>>value;
			
			tmp=(struct node*)malloc(sizeof(tmp)); 
			tmp->data=value; 
			
			q=Head;

			for(int i=1;i<pos;i++)
			{
				q=q->next;
			}
			
			q->next->prev=tmp;
			tmp->next=q->next;
			q->next=tmp;
			cout<<"\nIn Between";
		}
		
		else
		{
			cout<<"\nNot Possible";
		}
		
	}
}

void insL()
{
	struct node *tmp,*q; 
	int value; 
 
	cout<<"\nEnter value ->"; 
	cin>>value; 
 
	tmp=(struct node*)malloc(sizeof(tmp)); 
	tmp->data=value; 
	tmp->next=NULL; 
 
 	q=Head;  
	
	while(q->next!=NULL)   
	{   
		q=q->next;   
	}  
		q->next=tmp;  
		tmp->prev=q;  
		cout<<"\nInserted at last"; 
} 
