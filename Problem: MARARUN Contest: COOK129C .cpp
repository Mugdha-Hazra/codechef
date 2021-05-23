#include<bits/stdc++.h>
using namespace std;
int main()
{
               int t;
               cin>>t;
               while(t--)
               {              int day,d,a,b,c;
                              cin>>day>>d>>a>>b>>c;
                              int p=day*d;
                              if(p>=42)
                              cout<<c<<"\n";
                              else if(p>=21)
                              cout<<b<<"\n";
                              else if(p>=10)
                              cout<<a<<"\n";
                              else
                              cout<<"0"<<"\n";
               }
               return 0;
}
