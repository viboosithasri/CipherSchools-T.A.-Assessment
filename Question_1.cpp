#include <bits/stdc++.h>

using namespace std;

void findNumbers(int N)
{
	if(N==1 || N%2!=0)
	{
		cout<<"0"<<",";
	}
    for (int j = 1; j <= N / 2; j++) 
	{
        cout<<j<<","<<-j<<",";
    }
}
int main()
{
    int N,i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>N;
    	findNumbers(N);
    	cout<<"\n";
	}
}
