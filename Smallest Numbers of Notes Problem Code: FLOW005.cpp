#include <iostream>
using namespace std;

int main() 
{
               int t;
               cin>>t;
               while(t>0)
               {
                              int n,c=0;
                              cin>>n;
                              while(n)
                              {
                                      if(n>=100)
                                     { n-=100; c++;}
                                      else if(n>=50)
                                     { n-=50; c++;}
                                      else if(n>=10)
                                      {n-=10; c++;}
                                      else if(n>=5)
                                      {n-=5; c++;}
                                      else if(n>=2)
                                      {n-=2; c++;}
                                      else if(n>=1)
                                      {n-=1; c++;}
                              }
                              cout<<c;
                              cout<<"\n";
                              t--;
               }
               return 0;
}
