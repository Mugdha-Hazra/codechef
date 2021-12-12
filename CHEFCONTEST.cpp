#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,p,q;
        cin>>x>>y>>p>>q;
        if(x+(p*10)<y+(q*10))
        cout<<"Chef\n";
        else if(x+(p*10)>y+(q*10))
        cout<<"Chefina\n";
        else
        cout<<"draw\n";
    }
    return 0;
}
