#include <iostream>
using namespace std;

int main() 
{ int t;
cin>>t;
while(t>0)
{
               int x,y,z;
               cin>>x>>y>>z;
               if(x>=y&&x>=z)
               {
                              if(y+z==x)
                              cout<<"YES\n";
                              else
                              cout<<"NO\n";
               }
               else if(y>=x&&y>=z)
               {
                              if(x+z==y)
                              cout<<"YES\n";
                              else
                              cout<<"NO\n";
               }
               else if(z>=y&&z>=x)
               {
                              if(y+x==z)
                              cout<<"YES\n";
                              else
                              cout<<"NO\n";
               }
               t--;
}
	// your code goes here
	return 0;
}
