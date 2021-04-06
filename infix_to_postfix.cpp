#include<iostream>
using namespace std;
#define SIZE 50
//a+b*(c^d-e)^(f+g*h)-i
char s[SIZE];
int top=-1;
      
void push(char element)
{                       
    s[++top]=element;
}
 
char pop()
{                      
    return(s[top--]);
}
 
int pr(char element)
{                 
    switch(element)
    {
    case '#': 
		return 0;
    case '(':
		return 1;
    case '+':
    case '-': 
		return 2;
    case '*':
    case '/': 
		return 3;
    }
}
 
int main()
{                        
    char infix[50],postfix[50],ch,element;
    int i=0,k=0;
    
    cout<<"Infix Expression:"<<endl;
    cin>>infix;
    
    push('#');
    while((ch=infix[i++])!='\0')
    {
    	if( ch == '(') 
			push(ch);
    	
		else
    	if(isalnum(ch)) 
			postfix[k++]=ch;
      	
		else
    	if( ch == ')')
    	{
        	while( s[top] != '(')
      		postfix[k++]=pop();
        	element=pop(); 
    	}
    
		else
    	{       
        	while( pr(s[top]) >= pr(ch) )
      		postfix[k++]=pop();
        	push(ch);
    	}
    
    }
    
	while(s[top]!='#')     
  	{
  		postfix[k++]=pop();
    	postfix[k]='\0'; 
	}
	
    cout<<endl<<"Postfix Expression:"<<endl<<postfix;
}
