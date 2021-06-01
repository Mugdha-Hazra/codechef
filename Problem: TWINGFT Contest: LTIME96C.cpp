#include <bits/stdc++.h>
using namespace std;
int main() 
{
               long long int t;
               cin>>t;
               while(t--)
               {
                              long long int n,k,a[1000000000],i; 
                              cin>>n>>k;
                              for(i=0;i<n;i++)
                              {
                                             cin>>a[i];
                              }
                              sort(a,a+n, greater<int>());
                             long long int m=0,n1=0;
                              for(i=0;i<n;i++)
                              {
                                             if(i<2*k)
                                             {
                                               if(i%2==0)
                                                { m+=a[i];}
                                               else{
                                                            n1+=a[i];
                                               }
                                             }
                                             else if(i==2*k)
                                             {
                                                 n1+=a[i];
                                             }
                                             else
                                             break;
                                             
                              }
                            
                              cout<<max(m,n1)<<"\n";
               }
               return 0;
}
