#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s,c;
        cin>>n;
        cin>>s;
       c=s;
       sort(c.begin(),c.end());
   if(s==c)
   cout<<"Yes\n";
   else{
       for(int i=0;i<n/2;i++)
       {
           if(s[i]!=c[i])
           {
               swap(s[i],s[n-1-i]);
           }
       }
       if(s==c)
       cout<<"Yes\n";
       else
       cout<<"No\n";
   }
      // cout<<c<<"\n";
    }
    return 0;
}
