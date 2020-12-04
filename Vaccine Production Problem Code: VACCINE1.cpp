#include <iostream>
using namespace std;
int main()
{int d1,v1,d2,v2,p,i,c=0,t;
cin>>d1>>v1>>d2>>v2>>p;
t=p;
i=0;
while(p>0)
{ p=t;
    if(i>=d1)
    c+=v1;
    if(i>=d2)
    c+=v2;
   p=p-c;
  // cout<<"*"<<p<<"\t";
   ++i;            
}cout<<i-1<<"\n";
return 0;
}
