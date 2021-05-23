#include<bits/stdc++.h>
using namespace std;
int main()
{
               int t;
               cin>>t;
               while(t--)
               {
               int g,p,a[11],i,s=0;
               cin>>g>>p;
               for(i=1;i<=10;i++)
               cin>>a[i];
               for(i=10;i>g;i--)
               {s+=a[i];}
               int min=s+p;
               cout<<min/p<<" ";
               int max=s+a[g];
               if(max%p==0)
               cout<<max/p<<"\n";
               else
               cout<<(max/p)+1<<"\n";
               }
               return 0;
}
