#include <iostream>
using namespace std;

int main() 
{
               int t;
               cin>>t;
               while(t>0)
               {
                              int a,b;
                              cin>>a>>b;
                              (a!=b?(a>b?cout<<">":cout<<"<"):cout<<"=");
                              cout<<"\n";
                              t--;
               }
               return 0;
}
