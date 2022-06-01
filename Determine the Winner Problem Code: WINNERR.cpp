#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>c&&a>d||b>c&&b>d)
        cout<<"Q\n";
        else if(c>a&&c>b||d>a&&d>b)
        cout<<"P\n";
        else cout<<"TIE\n";
    }
    return 0;
}
