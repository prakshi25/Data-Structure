#include<iostream>
using namespace std;

void quickSort(int[10],int,int);

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
	
	quickSort(list,0,size-1);
	
	cout<<"List After Sorting: "<<endl;
   
   for (int i=0;i<size;i++)
   {
   		cout<<list[i]<<endl;
   }
   
  	return 0;
}

void quickSort(int list[10],int first,int last)
{
	int pivot,tmp,i,j;
	
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		
		while(i<j)
		{
			while(list[i]<=list[pivot] && i<last)
			i++;
			
			while(list[j]>list[pivot])
			j--;
			
			if(i<j)
			{
				tmp=list[i];
				list[i]=list[j];
				list[j]=tmp;
			}
		}
		
		tmp=list[pivot];
		list[pivot]=list[j];
		list[j]=tmp;
		quickSort(list,first,j-1);
		quickSort(list,j+1,last);
	}
	
}
