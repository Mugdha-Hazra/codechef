#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
               int r,o,c,s=0;
               cin>>r>>o>>c;
               s=20-o;
               ((c+(s*6*6))>r?cout<<"YES\n":cout<<"NO\n");
               return 0;
}
