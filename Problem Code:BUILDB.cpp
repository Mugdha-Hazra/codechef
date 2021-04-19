 #include <iostream>
using namespace std;
#define ll long long
int main(){
	ll T,n,k,ten,ptime,t,max=0;
	cin>>T;
	while(T--)
	{
	    cin>>n>>k;
	    int arr[n],b[n];
	    for(int i=0;i<n;i++)
                   {cin>>arr[i];}
	    for(int i=0;i<n;i++)
	    {cin>>b[i];}
	    ptime=arr[0];
	    ten=b[0];
	    max=ten;
	    for(int i=1;i<n;i++)
	    {
	        if(ten>max)
	            max=ten;
	        t=arr[i]-ptime;
	        ten-=t*k;
	        if(ten<0)
	            ten=0;
	        ten+=b[i];
	        ptime=arr[i];
	    }
	    if(ten>max)
	       max=ten;
	    cout<<max<<endl;
	}
	return 0;
}
