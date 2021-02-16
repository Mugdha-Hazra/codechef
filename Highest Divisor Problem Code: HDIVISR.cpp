#include <iostream>
using namespace std;

int main() 
{
               int n,i;
               cin>>n;
               for(i=10;i>0;i--)
               {
                              if(n%i==0)
                              {
                                             cout<<i<<"\n";
                                             break;
                              }
               }
               return 0;
}
