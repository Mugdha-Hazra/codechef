#include <iostream>
using namespace std;

int main()
{  int t;
cin>>t;
while(t>0)
{
               int o=0,e=0,n,a[100000],i;
               cin>>n;
               for(i=0;i<n;i++)
               {
                              cin>>a[i];
                              if(a[i]%2==0)
                              o++;
                              else
                              e++;
               }
               (o>e?cout<<e<<"\n":cout<<o<<"\n");
               t--;
               
}
	// your code goes here
	return 0;
}
