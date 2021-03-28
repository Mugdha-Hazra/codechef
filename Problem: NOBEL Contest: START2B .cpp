#include <iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int main() 
{              int t;
               cin>>t;
               while(t--)
               {
                              int n,m,i,j,a,p=0,q=0;
                              //cin>>n>>m;
                              scanf("%d%d",&n,&m);
                              set<int> s;
                //inserting into set
                for(auto i=0;i<n;i++)
                {             //cin>>a;
                              scanf("%d",&a);
                               s.insert(a);
                }
                //iterate over the set and print the elements
                for(auto it=s.begin();it!=s.end();it++)
                {
                               p=p+(*it);
                }//only unique and sorted output
                //cout<<p<<"\n";
                q=m*(m+1)/2;
                (q>p?cout<<"YES\n":cout<<"NO\n");
                              /*
                              for(i=1;i<m;i++)
                              { f=0;
                                             for(j=0;j<n;j++)
                                             {
                                                            if(b[i]==a[j])
                                                            {
                                                                           f=1;
                                                                           continue;
                                                            }
                                             }
                                             if(f==0)
                                             {
                                                            cout<<"YES\n";
                                                            break;
                                             }
                              }
                              if(f==1)
                              {
                                             cout<<"NO\n";
                              }*/
               }
	return 0;
}






















      /*//vector<int>v;
                              cin>>n>>m;
                              for(i=0;i<n;i++)
                              {
                                           cin>>a[i];
                                  
                              }
                              for(i=1;i<=m;i++)
                              {f=0;
                              for(j=0;j<n;j++)
                                 { if(i==a[j])
                                    {break;
                                     f=1;
                                    }
                                 }
                                 if(f==0)
                                 {cout<<"Yes\n";
                                  
                                 break;}
                              }
                              if(f==1) cout<<"No\n";
               */
