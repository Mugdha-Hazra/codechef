#include <iostream>
using namespace std;
int main() 
{
               int t;
               cin>>t;
               while(t--)
               {
                              int b,m,h;
                              cin>>m>>h;
                              b=m/(h*h);
                              if(b<=18)
                              cout<<"1\n";
                              else if(b>18&&b<25)
                              cout<<"2\n";
                               else if(b>24&&b<30)
                              cout<<"3\n";
                              else
                              cout<<"4\n";
               }
               return 0;
}
