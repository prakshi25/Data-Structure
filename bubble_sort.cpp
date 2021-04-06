#include<iostream>
using namespace std;

void bubbleSort(int[10],int);

int main()
{

   int size,list[100];
 
   cout<<"Enter The Size Of The List: ";
   cin>>size;
 
   cout<<"Enter Values: "<<endl;
   
   for (int i=0;i<size;i++)
	{
   		cin>>list[i];
	}
	
	bubbleSort(list,size);

	return 0;	
}

void bubbleSort(int list[10],int size)
{
	int tmp,i,j;
	
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(list[j]>list[j+1])
			{
				tmp=list[j];
				list[j]=list[j+1];
				list[j+1]=tmp;
			}
		}
	}
		
	cout<<"List After Sorting: "<<endl;
   
   	for (int i=0;i<size;i++)
   	{
   		cout<<list[i]<<endl;
   	}
   
}
