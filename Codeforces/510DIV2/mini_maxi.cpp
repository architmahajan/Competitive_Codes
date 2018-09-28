#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n,m,x,sum=0,i,mini,maxi;
	cin>>n>>m;
	ll a[n];
	
	for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
	sort(a,a+n);
	maxi=a[n-1]+m;
	for(i=0;i<n-1;i++)
	{
		sum+=(a[n-1]-a[i]);
	}
	if(m<=sum)
	{
		mini=0;
	}
	else
	{
		m-=sum;
		if(m%n==0)
			mini=m/n;
		else
			mini=m/n+1;
	}
	cout<<mini+a[n-1]<<" "<<maxi<<endl;
	return 0;
}
