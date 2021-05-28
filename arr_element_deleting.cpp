#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int index;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
		{
			index=i;
			flag=1;
			break;
			
		}
		
	}
	if(flag==1)
	{
	
	for( int i=index;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
    
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
else
 cout<<-1;
	
	return 0;
}
