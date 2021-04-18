#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
               int t;
               cin>>t;
               while(t--)
               {
                              
                              set<int> s;
                              int n,x,c=0,p=0,z=0,q=0,a[1000000000];
                              cin>>n>>x;
                              for(int i=0;i<n;i++)
                              {         cin>>a[i];
                              }
                              for(auto i=0;i<n;i++)
                              {
                               s.insert(a[i]);
                              }
                              for(auto it=s.begin();it!=s.end();it++)
                              {
                               p++;
                               //cout<<*it<<" $ ";
                               }
                              //cout<<p<<"*";
                              if(n-p>=x)
                              cout<<p<<"\n";
                              else
                              {
                               z=n-p;
                               q=x-z;
                               p=p-q;
                               cout<<p<<"\n";
                              }
                              
               }
               return 0;
}
