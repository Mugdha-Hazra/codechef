#include <iostream>
using namespace std;
int main() 
{int t;
cin>>t;
while(t>0)
{int a,b,c;
cin>>a>>b>>c;
if((a>b&&a<c)||(a<b&&a>c))
cout<<a<<"\n";
else if((b>a&&b<c)||(b<a&&b>c))
cout<<b<<"\n";
else 
cout<<c<<"\n";
t--;
}
return 0;
}
