//https://www.codechef.com/problems/FLOW002
#include<iostream>
using namespace std;
int main()
{int t;
cin>>t;
          while(t>0)
          {
                    int a,b,c=0;
                    cin>>a>>b;
                    c=a%b;
                    cout<<c<<"\n";
                    t--;
          }
          return 0;
}
