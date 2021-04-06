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
	struct node *q,*tmp;
	int value;
	
	cout<<"\nENTER VALUE:";
	cin>>value;
	
	tmp=(struct node*)malloc(sizeof(tmp));
	tmp->data=value;
	
	if(Head==NULL)
	{
		Head=tmp;
		tmp->next=Head;
	}
	
	else
	{
		q=Head;
		while(q->next!=Head)
		{
			q=q->next;
		}
		q->next=tmp;
		tmp->next=Head;
	}
}

void print()
{
	struct node *q;
	
	if(Head==NULL)
	{
		cout<<"\nEMPTY\n";
	}
	
	else
	{
		q=Head;
		cout<<"\nITEMS:"<<endl;
		cout<<"\t-->"<<q->data;
		q=q->next;
		
		while(q!=Head)
		{
			cout<<"\t-->"<<q->data;
			q=q->next;
		}
	}
}

int count()
{
	int cnt=0; 
	
	struct node *q; 
	
	if(Head==NULL)  
	cout<<"\nEMPTY"; 
	
	else  
	{   
		q=Head;   
		q=q->next;   
		cnt=1; 
 
  		while(q!=Head)   
		{    
			cnt++;    
			q=q->next;   
		}
		  	
	}  
	return cnt; 
}

void delF()
{
	struct node *tmp,*q; 
	
	if(Head==NULL)  
	cout<<"\nEmpty"; 
	
	else  
	{
	 	q=Head;   
		q=q->next; 
 
  	while(q->next!=Head)   
	{    
		q=q->next;   
	} 
 
  	tmp=Head;   
	q->next=Head->next;   
	Head=Head->next; 
 
  	free(tmp);  
	}  
}

void delA()
{
	struct node *tmp,*q; 
 	int pos; 
 
	cout<<"\nENTER POSITION:"; 
	cin>>pos; 
 
 	if(pos<count() && pos>0)  
	{ 
 		q=Head; 
 
 	for(int i=1;i<pos-1;i++)   
	{    
		q=q->next;   
	}  
		tmp=q->next;  
		cout<<"\nREMOVED ITEM:"<<tmp->data;  
		q->next=tmp->next;  
		free(tmp); 
 	} 
 
 	else  
	{   
		cout<<"\nNOT POSSIBLE";  
	}
}

void delL()
{
	struct node *tmp,*q; 
	
	if(Head==NULL)  
	cout<<"\nEMPTY"; 
	
	else  
	{ 
 		q=Head;   
		q=q->next; 
 
  	while(q->next->next!=Head)   
	{    
		q=q->next;   
	} 
 
 	tmp=q->next;  
	q->next=q->next->next;  
	free(tmp);  
	
	cout<<"\nDELETE LAST";   
	} 
 
} 


void insF()
{
	struct node *tmp,*q; 
	
	if(Head==NULL)  
	cout<<"\nEMPTY"; 
	
	else  
	{   
		int value; 
 
  		cout<<"\nENTER VALUE:";   
		cin>>value; 
 
  		tmp=(struct node*)malloc(sizeof(tmp));   
		tmp->data=value; 
 
  		q=Head;   
		q=q->next;
		
		while(q->next!=Head)   
		{
		    q=q->next;   
		}  
		
			q->next=tmp;  
			tmp->next=Head;  
			Head=tmp;  
	}
}

void insA()
{
	struct node *q,*tmp; 
 	int pos,value; 
 
	cout<<"\nENTER POSISTION:"; 
	cin>>pos; 
 
 	if(pos<count())  
	{  
		q=Head;  
		cout<<"\nENTER VALUE:";  
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
		cout<<"\nNOT POSSIBLE";  
	}
}

void insL()
{
	struct node *tmp,*q; 
	
	if(Head==NULL)  
	cout<<"\nEMPTY"; 
	
	else  
	{   
		int value; 
 
  		cout<<"\nENTER VALUE:";   
		cin>>value; 
 
  		tmp=(struct node*)malloc(sizeof(tmp));   
		tmp->data=value; 
 
  		q=Head;   
		q=q->next;
		
		while(q->next!=Head)   
		{
		    q=q->next;   
		}  
		
			tmp->next=q->next;  
			q->next=tmp;  
			cout<<"\nINSERTED ON LAST POSITION";  
	}
}

