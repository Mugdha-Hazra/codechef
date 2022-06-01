#include <iostream>
using namespace std;
bool odd(long long int x)
{
    return x&1;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(k==1)
        {
            if(odd(n))cout<<"Odd\n";
            else
            cout<<"even\n";
        }
        else if(k==2)
        cout<<"odd\n";
        else
        cout<<"even\n";
     }
    return 0;
}
