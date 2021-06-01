#include <bits/stdc++.h>
using namespace std;
 

void kmax(int arr[], int k, int n) {
 
 int q=k;
 int ans=0;
    
    for(int c = 0; c < k; c++){
 
        
        int max_so_far = numeric_limits<int>::min();
        int max_here = 0;
 
        
        int start = 0, end = 0, s = 0;
        for(int i = 0; i < n; i++)
        {
            max_here += arr[i];
            if (max_so_far < max_here)
            {
                max_so_far = max_here;
                start = s;
                end = i;
            }
            if (max_here < 0)
            {
                max_here = 0;
                s = i + 1;
            }
        }
        ans =ans + max_so_far*q;
        q--;
        
        for (int l = start; l <= end; l++)
            arr[l] = numeric_limits<int>::min();
    }
    cout<<ans;
    cout << endl;
}
int main()
{
    
    
    int t;
    cin>>t;
    while(t--)
    {
        int n1,k1;
        cin>>n1>>k1;
        int arr1[n1];
        for(int i=0;i<n1;i++)
        {
            cin>>arr1[i];
        }
        kmax(arr1,k1,n1);
    }
    
    
 
    
     
    return 0;
}
