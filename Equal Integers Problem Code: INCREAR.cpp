#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x<y)
        {
            cout<<y-x<<"\n";
        }
        else if(x>y)
        {if((x%2==0&&y%2==0)||(x%2==1&&y%2==1))
            cout<<(x-y)/2<<"\n";
            else
            cout<<2+(x-y)/2<<"\n";
        }
        else
        cout<<"0\n";
    }
    return 0;
}
