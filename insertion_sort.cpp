#include<iostream>
using namespace std;

int main()
{

   int size,j,tmp,list[100];
 
   cout<<"Enter The Size Of The List: ";
   cin>>size;
 
   cout<<"Enter Values: "<<endl;
   
   for (int i=0;i<size;i++)
	{
   		cin>>list[i];
	} 
      
   for (int i=1;i<size;i++) 
   {
      tmp=list[i];
      j=i-1;
      
	  while ((tmp<list[j]) && (j>=0)) 
	  {
         list[j+1]=list[j];
         
		 j=j-1;
      }
      
      list[j+1]=tmp;
   }
 
   cout<<"List After Sorting: "<<endl;
   
   for (int i=0;i<size;i++)
   {
   		cout<<list[i]<<endl;
   }
	
	return 0;
}
