#include <iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{
               int a,b,c;
               cin>>a>>b>>c;
               if(a+b+c==180)
               cout<<"YES"<<"\n";
               else 
               cout<<"NO"<<"\n";
               t--;
}return 0;
}
