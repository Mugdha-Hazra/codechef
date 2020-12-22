#include <iostream>
using namespace std;
int main() 
{int n,m,a,p=0,k=0;
cin>>n>>m>>a;
if(n%a==0)
{p=n/a;}
else
{p=(n/a)+1;}
if(m%a==0)
{k=m/a;}
else
k=(m/a)+1;
cout<<p*k;
               return 0;
}
