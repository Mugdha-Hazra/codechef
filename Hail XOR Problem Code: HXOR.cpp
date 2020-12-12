#include<bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
ll find_two(ll el)
{
    ll num=1;
    while(num<el)
    {
        num=num*2;
    }
    if(num!=el)
    num=num/2;
    return num;
}
void print_arr(ll arr[],int n)
{
    rep(i,n) cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll x;
        cin>>n>>x;
        ll arr[n];
        bool alleven=true,sorted=true;
        rep(i,n){
            cin>>arr[i]; 
            if(arr[i]%2!=0) alleven=false; 
            // if(i>0 && arr[i]<arr[i-1]) sorted=false;
        }
        int j=0;
        ll i=0;
        while(i<x){
            if(j==n-1) break;
            if(arr[j]==0) {j++;continue;}
            ll max_2=find_two(arr[j]);
            int k=j+1;
            for(;k<n-1;k++)
            {
                ll el=arr[k]^max_2;
                if(el<arr[k])
                break;
            }
            arr[j]=arr[j]^max_2;
            arr[k]=arr[k]^max_2;
            i++;
            // print_arr(arr,n);
        }
        ll rem=x-i;
        if(n==2 && rem>0 && rem%2!=0)
        {
            arr[n-1]^=1;
            arr[n-2]^=1;
        }
        print_arr(arr,n);
    }
    return 0;
}
