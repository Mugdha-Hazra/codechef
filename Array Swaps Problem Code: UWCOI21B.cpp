
#include<bits/stdc++.h>

using namespace std;


int minSwaps(int arr[], long long int n)
{

	pair<int, int> arrPos[n];
	for (int i = 0; i < n; i++)
	{
		arrPos[i].first = arr[i];
		arrPos[i].second = i;
	}

	sort(arrPos, arrPos + n);


	vector<bool> vis(n, false);

	// Initialize result
	int ans = 0;

	// Traverse array elements
	for (int i = 0; i < n; i++)
	{
	
		if (vis[i] || arrPos[i].second == i)
			continue;

		int cycle_size = 0;
		int j = i;
		while (!vis[j])
		{
			vis[j] = 1;

			// move to next node
			j = arrPos[j].second;
			cycle_size++;
		}

		 
		if (cycle_size > 0)
		{
			ans += (cycle_size - 1);
		}
	}

	// Return result
	return ans;
}
int main()
{
               int arr1[100000000], arr2[100000000]; 
          long long int n ,m,i,j,p=0,q=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{cin>>arr1[i];}
	for(j=0;j<m;j++)
	{cin>>arr2[j];}
	p= minSwaps(arr1, n);
	q=minSwaps(arr2, m);
	cout<<p+q<<"\n";
	return 0;
}
