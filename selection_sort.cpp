#include<iostream>
using namespace std;

int main()
{

   int size,tmp,list[100];
 
   cout<<"Enter The Size Of The List: ";
   cin>>size;
 
   cout<<"Enter Values: "<<endl;
   
   for (int i=0;i<size;i++)
	{
   		cin>>list[i];
	} 
      
   for (int i=0;i<size;i++) 
   	{
      for(int j=i+1;j<size;j++)
   		{
			if(list[i]>list[j])
			{
				tmp=list[i];
				list[i]=list[j];
				list[j]=tmp;
			}   
		}
	}
 
   cout<<"List After Sorting: "<<endl;
   
   for (int i=0;i<size;i++)
   {
   		cout<<list[i]<<endl;
   }
	
	return 0;
}
