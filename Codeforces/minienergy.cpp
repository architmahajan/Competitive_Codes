#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,sum=0,x,y,i;
	cin>>n>>m;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		sum+=min(a[x-1],a[y-1]);
	}
	cout<<sum<<"\n";
	return 0;
}