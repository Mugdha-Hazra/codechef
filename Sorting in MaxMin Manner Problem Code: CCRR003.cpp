#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t;
cin>>t;
while(t>0)
{
               int n,a[100000],i,b[100000],j,k;
               cin>>n;
               for(i=0;i<n;i++)
               {
                              cin>>a[i];
               }
               sort(a,a+n);
               i=0;k=0;
               for(j=n-1;j>=n/2;j--)
               {
                              b[k]=a[j];
                              k++;
                              b[k]=a[i];
                              k++;
                              i++;
               }
               for(k=0;k<n;k++)
               {
                              cout<<b[k]<<" ";
               }cout<<"\n";
               t--;
}
               return 0;
}
