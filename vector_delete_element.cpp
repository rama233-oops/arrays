#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x;
   cin>>x;
   int ind;
   vector<int>ve;
   ve.push_back(10);
   ve.push_back(20);
   ve.push_back(30);
   ve.push_back(40);
   ve.push_back(50);
   
   vector<int>::iterator it=ve.begin();
   while(1)
   {
   	if(x==(*it))
   	{
   		ind=it-ve.begin();
   		break;
   		
	  }
	  it++;
	  
   }
   ve.erase(ve.begin()+ind);
for(vector<int>::iterator it=ve.begin();it!=ve.end();it++)
{
	cout<<*(it)<<" ";
   }   return 0;
   
}
