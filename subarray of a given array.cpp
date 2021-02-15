// finding the subarrays of the given array.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subarray(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			for(k=i;k<=j;k++)
			{
			  cout<<a[k];
			} cout<<"\n";
		}
	}
}
int main()
 {
 	int t;
 	cin>>t;
 	while(t>0)
 	{
	 int n;
	 cin>>n;
	 int a[n],i;
	 for(i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 }
	 subarray(a,n);
	 t--;
	 }
	 
 }
 
