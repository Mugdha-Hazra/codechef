#include <iostream>
using namespace std;

int main()
{int t;
cin>>t;
while(t>0)
{
               int k,n,i,j,a[1000000],p=0,q=0;
               cin>>k>>n;
               for(i=1;i<=n;i++)
               {
                              cin>>a[i];
               }
               for(i=1;i<=n;i++)
               {
                              if(a[i]==k)
                              {
                                             p=i;
                                             break;
                              }
               }
               for(i=1;i<=n;i++)
               {
                              if(a[i]==k)
                              {
                                             q=i;
                              }
                              
               }
               if((p==0&&q==0)||(p==0&&q!=0)||(p!=0&&q==0)||(p==q))
               {
                             cout<<"-1"<<"\n"; 
               }
               else
               cout<<p<<" "<<q<<"\n";
               p=0;
               q=0;
               t--;
               
}
	// your code goes here
	return 0;
}
