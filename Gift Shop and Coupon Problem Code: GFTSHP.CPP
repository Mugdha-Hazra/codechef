#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,s=0,j=0;
        cin>>n>>k;
         int a[1000000000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(s<=k)
            { s+=a[i];
             j=i;   
            }
        }
        if(s<=k)
        cout<<n<<"\n";
        else
        {
            s=s-a[j];
            if(a[j]%2==0)
            {
                if(s+a[j]/2<=k)
                cout<<j+1<<"\n";
                else
                cout<<j<<"\n";
            }
            else
            {
                if(1+s+a[j]/2<=k)
                cout<<j+1<<"\n";
                else
                cout<<j<<"\n";
            }
        }
    }
    return 0;
}
