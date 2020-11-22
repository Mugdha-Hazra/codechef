#include <iostream>
using namespace std;
int main()
{ int n,m,k,c=0;
cin>>n>>m>>k;
while(n>0)
{int i,t[10000000],q,s=0;
for(i=0;i<k;i++)
{cin>>t[i];}
cin>>q;
for(i=0;i<k;i++)
{s+=t[i];
}
if(s>=m&&q<=10)
{c++;}
n--;
}
cout<<c<<"\n";
return 0;
}
