#include <iostream>
using namespace std;
int main()
{int t,c=0;
cin>>t;
while(t>0)
{
int n,f[1000],i,p=0,q=0;
cin>>n;
for(i=0;i<n;i++)
{cin>>f[i];}
if(f[0]==0)
cout<<"0\n";
else if(f[0]>0)
{{p=f[0];
c=0;
for(i=1;i<n;i++)
{  if(p>0)
               { p+=f[i];
                --p;
                c+=1;
               }
   else 
  { 
    break;}}
}
cout<<p+c<<"\n";}
t--;
}return 0;
}
