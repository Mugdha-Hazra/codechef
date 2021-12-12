#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
    
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int c=0,m=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='0')
        {
            m++;
            if(m%k==0)
            {
                c+=1;
                m=0;
            }
        }
        else{
            m=0;
        }
    }
        cout<<c<<"\n";
    }
    return 0;
}
