#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int arr[n];
        int counter=0;
        int flag=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]>i+1)
            {
                cout << "Second\n";
                flag=1;
                break;
            }
            else
            {
                counter += i+1-arr[i];
            }
        }
        if(flag==0)
        {
            if(counter&1){
                cout << "First\n";
            }
            else
            {
                cout << "Second\n";
            }
        }
    }
    return 0;
}
