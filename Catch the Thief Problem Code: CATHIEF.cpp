#include <iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t>0)
{
               int x,y,n,k,c=0;
               cin>>x>>y>>n>>k;
               if(x>=y)
               {while(x>=y)
               {            if(x-n>=0)
                              x=x-n;
                             if(y+n<=k)
                              y=y+n;
                              if(y==x)
                              {c++;break;}
               }
               if(c>0)
               cout<<"Yes";
               else
               cout<<"No";}
               else
               {
                    while(x<=y)
               {            if(x+n<=k)
                              x=x+n;
                            if(y-n>=0)
                              y=y-n;
                              if(y==x)
                              {c++;break;}
               }
               if(c>0)
               cout<<"Yes";
               else
               cout<<"No";}          
               cout<<"\n";
                              t--;
              
}
	// your code goes here
	return 0;
}
