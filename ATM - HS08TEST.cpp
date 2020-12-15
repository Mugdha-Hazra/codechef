//https://www.codechef.com/problems/HS08TEST
// ATM 
#include <iostream>
#include<iomanip>
using namespace std;
int main() 
{         int x;
          double oc,rc;
          cin>>x>>oc;
          if((oc>=(x + 0.50)) && ( x % 5 == 0))
          {rc=oc-(x + 0.50);
          cout << fixed << setprecision(2) << rc;
          }
          else
           cout << fixed << setprecision(2) << oc;
return 0;
}
