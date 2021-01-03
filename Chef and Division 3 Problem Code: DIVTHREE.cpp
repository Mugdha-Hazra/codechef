#include <iostream>
using namespace std;

int main() 
{int t;
cin>>t;
while(t>0)
{ int n,k,d,a[10000000],i,s=0,p=0,m=0;
               cin>>n>>k>>d;
               for(i=0;i<n;i++)
               {
                              cin>>a[i];
                              s+=a[i];
               }
               if(s/k>0)
               {
                              p=s/k;
                              if(p>d)
                              m=d;
                              else
                              m=p;
                              cout<<m<<"\n";
               }
               else
               cout<<"0\n";
               t--;
}
               return 0;
}
