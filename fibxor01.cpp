// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return the nth XOR Fibonacci number 
int nthXorFib(int n, int a, int b) 
{ 
	if (n == 0) 
		return a; 
	if (n == 1) 
		return b; 
	if (n == 2) 
		return (a ^ b); 

	return nthXorFib(n % 3, a, b); 
} 

// Driver code 
int main() 
{ int t;
cin>>t;
while(t>0)
{
	int a , b , n ;
	cin>>a>>b>>n;
              cout << nthXorFib(n, a, b)<<"\n"; 
               t--;
}

	return 0; 
} 
