#include <iostream>
using namespace std;

int main()
{ int t;
cin>>t;
while (t>0)
{
               int n,k,a[1000000],i,w=0,q,m=0,g=0,r=0;
               float p;
               cin>>n>>k;
               for(i=0;i<n;i++)
               {
                              cin>>a[i];
                              if(a[i]==-1)
                              w++;
                              if(a[i]>k)
                              g++;
                              if(a[i]>=0&&a[i]<=1)
                              r++;
               }
               (n%2==0?p=n/2:p=(n/2)+1);
               q=n-w;
               if(q<p) cout<<"Rejected\n";
               else if(g>0) cout<<"Too Slow\n";
               else if(r==n) cout<<"Bot\n";
               else cout<<"Accepted\n";
               t--;
               
}
               return 0;
}
