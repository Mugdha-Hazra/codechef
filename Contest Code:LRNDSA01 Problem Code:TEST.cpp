#include <iostream>
using namespace std;

int main() 
{ int n=100;
               while(n>0)
               { int a;
                              cin>>a;
                              if(a!=42)
                              cout<<a<<"\n";
                              else 
                              break;
                              n--;
               }
	return 0;
}
