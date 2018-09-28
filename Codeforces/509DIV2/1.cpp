#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	int n,i,mini,maxi;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	mini=a[0];
	maxi=a[n-1];
	cout<<maxi-mini+1-n;
	return 0;
}