#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;//arr size
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"sorted order";
	}
	else
	{
		cout<<"not in sorted order";
	}
	
}
