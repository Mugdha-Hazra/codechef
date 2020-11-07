//Ada and Dishes 
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{
int i,n,arr[10000],p=0,q=0;
cin>>n;
for(i=0;i<n;i++)
{cin>>arr[i];}
sort(arr, arr + n, greater<int>()); 
p=arr[1]+arr[2];
q=arr[0];
for(i=3;i<n;i++)
{if(q>p)
p+=arr[i];
else
q+=arr[i];
}
if(p>q)
cout<<p<<"\n";
else
cout<<q<<"\n";
t--;
}
	// your code goes here
	return 0;
}
