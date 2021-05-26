#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,n;
	cin>>size>>n;
	int a[n];
	int ele,index;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
//ele 100,index=3
	while(n<size)
	{
		cin>>ele>>index;
		int j;
	   for(j=n-1;j>=index;j--)//j=2,2>=1//j=1
	    {
		  a[j+1]=a[j];
		   if(j==index)
		   {
			break;
		   }
		//10 100 20 30,n=4
	    }
	    a[j]=ele;
	     n++;
	    for(int i=0;i<n;i++)
        {
	        cout<<a[i]<<" ";
       	}
   }
	
	
	
}
