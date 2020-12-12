#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}
int main()
{int t;
 int n,i,j,max,p=0,a[100000];
cin>>t;
while(t>0)
{
              // int n,i,j,max,p=0,a[100000];
               cin>>n;
               for(i=1;i<=n;i++)
               {
                              for(j=i + 1;j<=n;j++)
                              {    
                                             p=gcd(i,j);
                                             //cout<<p<<"*";
                                             if(p>max)
                                             max=p;
                                             //cout<<max<<"*";
                              }
               }
               cout<<max<<"\n";
               max=0;p=0;
               t--;
}return 0;
}
