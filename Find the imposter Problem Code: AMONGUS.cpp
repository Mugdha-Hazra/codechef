#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{ int n,a[100000000],b[100000000],i,j,m,c=0,k=0;
cin>>n;
m=n+1;
for(i=0;i<n;i++)
{
               cin>>a[i];
               c+=a[i];
               
}
for(j=0;j<m;j++)
{
               cin>>b[j];
               k+=b[j];
}
cout<<k-c;
               return 0;
}
