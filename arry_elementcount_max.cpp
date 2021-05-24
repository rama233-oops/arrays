#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int *maxi=max_element(a,a+n);
	int frq[*maxi+1]={0};
	for(int i=0;i<n;i++)
	{
		frq[a[i]]++;
	}
	for(int i=0;i<*maxi+1;i++)
	{
		cout<<i<<":"<<frq[i]<<" ";
	}
	return 0;
}
