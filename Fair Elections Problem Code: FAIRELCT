#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{int t;
cin>>t;
while(t>0)
{
               int n,m;
               cin>>n>>m;
               int a[1000000],b[1000000],i,j,s=0,p=0;
               for(i=0;i<n;i++)
               {
                              cin>>a[i];
                              s+=a[i];
               }
               for(j=0;j<m;j++)
               {
                              cin>>b[j];
                              p+=b[j];
               }
               if(s>p)
               {
                              cout<<"0\n";
               }
               else
               {     int c=0; j=m -1;
                              sort(a,a+n);
                              sort(b,b+m);
                              for(i=0;i<n;i++)
                              {if(s<=p)
                              {c++;
                              s=s+b[j]-a[i];
                              p=p+a[i]-b[j];
                              j--;
                              }
                              else if(s>p||j<0)
                              break;
                              }
                              if(s>p)
                              cout<<c<<"\n";
                              else
                              cout<<"-1\n";
               }
               t--;
               
}
               return 0;
}
