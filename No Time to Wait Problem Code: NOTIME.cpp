#include <iostream>
using namespace std;

int main()
{
               int n,h,x,a[1000000],i,f=0;
               cin>>n>>h>>x;
               for(i=0;i<n;i++)
               {
                              cin>>a[i];
                              if(a[i]>f)
                              f=a[i];
               }
               (f+x>=h?cout<<"Yes\n":cout<<"No\n");
               return 0;
}
