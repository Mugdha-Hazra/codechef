#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define lb lower_bound
#define ub upper_bound

int main()
{
    int test;
    cin>>test;
    while(test--)
    {   
        ll n,e,h,a,b,c;
        cin>>n>>e>>h>>a>>b>>c;
    
        vector<ll> ini_arr;
        for(int i=0;i<=n+1;i++)
        {
    		ini_arr.pb(i);
        }
        vector<ll> result;
        for(int i=0;i<=n;i++)
        {
            int indexTwo = ub(ini_arr.begin(),ini_arr.end(),(h-3*i))-ini_arr.begin()-1;
            int indexOne = lb(ini_arr.begin(),ini_arr.end(),(2*n-e-2*i))-ini_arr.begin();
            ll idx;
            if(indexTwo==n+1 && indexTwo+3*i>h) 
            {
                continue;
            }
            if(indexTwo<indexOne || indexOne==n+1) 
            {
                continue;
            }
            if(c<a)
            {
                if(indexTwo<n-i)
                {
                    idx=indexTwo;
                }
                else
                {
                    idx=n-i;
                }
            }
            else 
            {
                if(indexOne<n-i)
                {
                    idx=indexOne;
                }
                else
                {
                    idx=n-i;
                }
            }
            ll x=n-idx-i;
            if(idx+3*i <= h && idx+2*i >= 2*n-e)
            {
                result.pb(a*x+b*i+c*idx);
            }
        }
    
        int res_size = result.size();
        if(res_size != 0) 
        {
            ll min_val=result[0];
            for(int j=1;j<res_size;j++)
            {
                if(result[j]<min_val){
                    min_val=result[j];
                }
            }
            cout<<min_val<<endl;
        }
        else
        {
            cout<<"-1"<<endl; 
        }
    }
    return 0;
}
