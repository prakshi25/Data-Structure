#include<iostream>
using namespace std;

void sort(int[10],int);
void binarySearch(int[10],int,int);

int main()
{
	int list[100],size,number;
	
	cout<<"Enter The Size Of The List: ";
   	cin>>size;
 
   	cout<<"Enter Values: "<<endl;
   
   	for (int i=0;i<size;i++)
	{
   		cin>>list[i];
	}
	
	cout<<"Enter The Value You Want To Search:";
	cin>>number;
	
	sort(list,size);
	binarySearch(list,size,number);
}

void sort(int list[10],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size-1;j++)
		{
			if(list[i]>list[j])
			{
				int tmp=list[i];
				list[i]=list[j];
				list[j]=tmp;
			}
		}
	}
}

void binarySearch(int list[10],int size,int number)
{
	int flag=1;
	int low=0,high=size-1,mid;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		
		if(number<list[mid])
		{
			high=mid-1;
		}
		else if(number>list[mid])
		{
		low=mid+1;
		}
		else if(number==list[mid])
		{
		cout<<"Searched Value: "<<number;
		cout<<" Found At Position: "<<mid+1<<endl;
		flag=0;
		break;
		}
	}
	
	if(flag==1)
	{
	cout<<"Error! Value Not Found";
	}
}

