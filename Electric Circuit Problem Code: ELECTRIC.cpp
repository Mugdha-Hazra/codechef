#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, g, tmp, sum;
    cin >> t;

    while(t--)
    {
        g=0;
        sum=0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            g=__gcd(g,tmp);
            sum+=tmp;
        }
        cout << g << " " << sum/g << "\n";
    }


    return 0;
}
