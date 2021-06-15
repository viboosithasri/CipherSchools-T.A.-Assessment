#include<iostream>
using namespace std;
int main()
{
	int N,amt,k,i,count=0,left=0;
	cout<<"Enter the total number of items:";
	cin>>N;
	int *a = new int(N);
	cout<<"Enter the price of items:";
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	cout<<"Units of money customer has:";
	cin>>amt;
	cout<<"k value";
	cin>>k;
	for(i=0;i<N;i++)
	{
	
			if(a[i]==amt || amt%a[i]==0)
				count+=1;
	}
	if(k==count)
		cout<<"Right";
	else
		cout<<"Wrong";
}
