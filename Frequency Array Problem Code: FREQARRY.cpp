#include <iostream>
using namespace std;
int main() 
{int t;
cin>>t;
while(t>0)
{int n,i,j,a[100000],c=0;
cin>>n;
for(i=0;i<n;i++)
{cin>>a[i];}
for(i=0;i<n;i++)
{
               for(j = i + 1 ; j<n ;j++)
               {
                 if(a[i]==a[j])
                 {c=1;break;
                 }
               }
}
if(c==0)
cout<<"prekrasnyy\n";
else
cout<<"ne krasivo\n";
t--;
}return 0;
}
