#include <iostream>
using namespace std;

int main() 
{ int n;
cin>>n;
int c=0,max=0,a[100000000],i;
for(i=0;i<n;i++)
{
               cin>>a[i];
}
//p=a[0];
for(i=1;i<n;i++)
{
       if(a[i]==a[i-1])
       {
                      c++;
                      if(c>max)
                      max=c;
       }
       else 
       {
                      c=0;
       }
}
cout<<max + 1<<"\n";
               return 0;
}
