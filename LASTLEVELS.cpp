#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int c=0;
        c=x*y;
        if(x>3&&x%3!=0)
        {
            c+=(x/3)*z;
        }
        else if(x>3&&x%3==0)
        { 
            c+=((x/3)-1)*z;
        }
    cout<<c<<"\n";
    }
	return 0;
}
