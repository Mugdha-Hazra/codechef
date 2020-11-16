//Contest Code:PRACTICE Problem Code:FLOW004
#include <iostream>
#include<math.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{int p,q,s=0,n,r,c=0,d,a[100],i;
cin>>n;
p=n;
i=0;
while(n>0)
{r=n%10;
a[i]=r;
n=n/10;
i++;
c++;
}
r=p%10;
s=a[0]+a[c - 1];
cout<<s<<"\n";
t--;
}
return 0;
}
