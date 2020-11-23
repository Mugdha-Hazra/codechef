#include <iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{int n,a[10000],q,s=0,i;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a[i];
}
cin>>q;
while(q>0)
{int q1,q2,i,s=0;
cin>>q1>>q2;
for(i=q1;i<=q2;i++)
{s+=a[i];
}
cout<<s<<"\n";
s=0;
q--;
}
t--;
}return 0;
}
