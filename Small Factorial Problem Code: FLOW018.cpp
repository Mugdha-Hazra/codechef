#include <iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{int n,i,fact=1;
cin>>n;
for(i=1;i<=n;i++)
fact*=i;
cout<<fact<<"\n";
t--;
}return 0;
}
