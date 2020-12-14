#include <stdio.h>
#include <math.h>
int main(){
    long long int t,n,k,o,r,w,y,arr[10000000],z,e=0,l,j;
    scanf("%lld" ,&t);
    for (long long int l=1;l<=t;l++)
    {
        int i =0;
        scanf("%lld" , &n);
        scanf("%lld" , &k);
        for (long long int f=0;f<n;f++)
        {
            scanf("%lld" , &arr[f]);
        }
        for (long long int g=k;g>0&&i<n-1;g--)
        {
            w=0;
            long long int p = log(arr[i]) /log(2);
            r = pow(2,p);
            arr[i] = arr[i] ^ r;
            for (long long int j=i+1;j<n;j++)
            {
                if((arr[j] ^ r) < (arr[j]))
                {
                    arr[j] = arr[j] ^ r;
                    w=1;
                    break;
                }
            }
            if (w==0){
                arr[n-1] ^=r;
            }
            while (arr[i] <=0){
               i++; 
            }


            o = g+1;

        }
        if (o>0){
            if (n<3 && o%2 >0){
                arr[n-2] ^= 1;
                arr[n-1] ^= 1;
            }
        }
        for (long long int u=0;u<n;u++)
        {
            printf("%lld ",arr[u]);
        }

    }
}
