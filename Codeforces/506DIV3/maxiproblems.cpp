#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n],maxi=1,curr,i,ans=1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	curr=a[0];
	ans=1;
	for(i=1;i<n;i++)
	{	
		if(a[i]<=2*curr)
		{
			curr=a[i];
			ans++;
			continue;
		}
		else
		{
			if(maxi<ans)
				maxi=ans;
			ans=1;
			curr=a[i];
		}
	}
	if(maxi<ans)
		maxi=ans;
	cout<<maxi<<"\n";
	return 0;
}