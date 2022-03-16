#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,k=0;
        cin>>n>>x>>k;
        if(k/x<=n)
        cout<<k/x<<"\n";
        else
        cout<<n<<"\n";
    }
    return 0;
}
