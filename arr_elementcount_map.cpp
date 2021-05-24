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
    map<int,int>dic;
	for(int i=0;i<n;i++)
	{
		dic[a[i]]++;
	}
//	for(int i=0;i<*maxi+1;i++)
	//		cout<<i<<":"<<[i]<<" ";
//	}
for(auto it:dic)
{
	cout<<it.first<<" : "<<it.second<<"\n";
}
	return 0;
}
