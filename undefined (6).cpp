#include <iostream>
using namespace std;
int main() 
{int t;
cin>>t;
while(t>0)
{
int n,r,s=0;
cin>>n;
while(n>0)
{r=n%10;
s=s*10+r;
n=n/10;
}cout<<s<<"\n";
t--;
}return 0;
}
