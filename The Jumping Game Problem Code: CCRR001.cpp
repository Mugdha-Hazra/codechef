#include <iostream>
using namespace std;

int main() 
{ string s;
int i, x=0,y=0,k;
cin>>s;
for(i=0;i<s.size();i++)
{
               if(s[i]=='U')
               y+=1;
               else if(s[i]=='R')
               x+=1; 
               else if(s[i]=='L')
               x+=-1;
               else
               y+=-1;
}
if(x==0&&y==0)
cout<<"true\n";
else
cout<<"false\n";
               return 0;
}
