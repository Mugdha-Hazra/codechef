#include <iostream>
using namespace std;
int main() 
{             int t;
               cin>>t;
               while(t--)
               {
               int am,bm,cm,tm,a,b,c;
               cin>>am>>bm>>cm>>tm>>a>>b>>c;
               if(a+b+c>=tm)
               {
                              if(a>=am&&b>=bm&&c>=cm)
                              cout<<"YES\n";
                              else
                              cout<<"NO\n";
               }
               else 
               cout<<"NO\n";
                              
               }
               return 0;
}
