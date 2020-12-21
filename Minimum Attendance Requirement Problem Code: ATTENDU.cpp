#include <iostream>
#include<string.h>
#include"stdio.h"
using namespace std;
int main() 
{int t;
cin>>t;
while(t>0)
{int n,i,c=0,p=0;
char b[100000];
cin>>n;
cin>>b;
//cin.getline(a);
p=120-n;
for(i=0;b[i]!='\0';i++)
{
               if(b[i]=='1')
               c++;
}
if(c>=90||c+p>=90)
cout<<"YES";
else
cout<<"NO";
cout<<"\n";
               t--;
}
               return 0;
}
