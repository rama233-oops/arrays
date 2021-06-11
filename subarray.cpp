#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int sum;
	cin>>sum;
	int c=0;
	int f=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];//1 2 3
	}
	for(int i=0;i<n;i++)//i=0 //1
	{
		for(int j=i;j<n;j++)//j=0  1 2//1 2
		{
			c=0;//0
		for(int k=i;k<=j;k++)//k=0-2//
		{ 
		c=c+a[k];//6
		cout<<a[k]<<" ";//1,1 2 ,1 2 3,//2,2 3
		
		}
		
		if(sum==c)
		{
			cout<<"yes";
			f=1;
		}
		cout<<"\n";
		
		}
		
	}
	if(f==0)
	{
		cout<<"no";
	}

}
