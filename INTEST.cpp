//https://www.codechef.com/problems/INTEST
#include<iostream>
using namespace std;
int main()
{
int i,n,k, t[1000000000],count=0;
cin>>n>>k;
for(i=0;i<n;i++)
{
          cin>>t[i];
}
for(i=0;i<n;i++)
{
          if(t[i]%k==0)
            count++;
}
cout<<count;
return 0;
}
