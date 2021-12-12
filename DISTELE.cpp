#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int mod=1e9+7;
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,s=1;
        cin>>n;
        vector<int> a(n);
        for(int & i:a)
        cin>>i;
        map<int,int>f;
        for(int i:a)f[i]++;
        for(auto p:f)
        {
            int fr=p.second;
            s*=(fr+1);
            s%=mod;
        }
        cout<<s-1<<"\n";
    }
    return 0;
}
