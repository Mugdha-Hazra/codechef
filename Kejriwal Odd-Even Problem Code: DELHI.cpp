#include <iostream>
using namespace std;

int main() 
{int t;
cin>>t;
while(t>0)
{ int n,r,s=0,e=0,o=0;
cin>>n;
while(n>0)
{ r=n%10;
if(r%2==0)
e+=r;
else
o+=r;
n=n/10;
} (e%4==0||o%3==0?cout<<"Yes\n":cout<<"No\n");
               t--;
}
               return 0;
}
