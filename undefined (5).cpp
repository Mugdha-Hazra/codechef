#include <iostream>
using namespace std;
int main() 
{int t;
cin>>t;
while(t>0)
{int n,c=0,r;
cin>>n;
while(n>0)
{
r=n%10;
if(r==4)
c++;
n=n/10;
}
cout<<c<<"\n";
t--;
}
	return 0;
}
