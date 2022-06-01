#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n==1&&k==0)cout<<"No\n";
        else
        {
            if(n%2==0)
            cout<<"Yes\n";
            else{
                if(k==1)
                cout<<"Yes\n";
                else
                cout<<"No\n";
            }
        }
        
    }
    return 0;
}
