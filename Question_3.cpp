#include <iostream>
using namespace std;

#define MAX 100

int main()
{	int n,i,j,W,count=0,cap=0;
	cout<<"Enter no. of items:";
	cin>>n;
	int *val= new int(n);
	int *wt= new int(n);
	int temp;
	
	cout<<"Enter weights:";
	for(i=0;i<n;i++)
		cin>>val[i];
	
	cout<<"Enter values";
	for(i=0;i<n;i++)
		cin>>wt[i];
	
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(val[i]<val[j])
			{
				temp  =val[i];
				val[i]=val[j];
				val[j]=temp;
				
				temp  =wt[i];
				wt[i]=wt[j];
				wt[j]=temp;
			}
		}
	}
	cout<<"Enter the sack weight:";
	cin>>W;
	for(i=0;i<n;i++)
	{
		
		if((cap+val[i])<= W)
			{
				cap+=val[i];
				count+=wt[i];
			}
	}
	cout<<"Maximum value:"<<cap<<"\nMaximum capacity:"<<count;		
	return 0;	
}
