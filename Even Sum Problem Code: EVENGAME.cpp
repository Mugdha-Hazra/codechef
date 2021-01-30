#include <iostream>
using namespace std;

int main()
{ 
               int t;
               cin>>t;
               while(t>0)
               {
                              int n,a[10000000],i,s=0;
                              cin>>n;
                              for(i=0;i<n;i++)
                              {
                                             cin>>a[i];
                                             s+=a[i];
                              }
                              (s%2==0?cout<<"1\n":cout<<"2\n");
                              t--;
               }
               return 0;
}
