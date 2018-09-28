#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,mini;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n-1;i++)
		{
			if(i==0)
				mini=a[i+1]-a[i];
			else
			{
				if(mini>(a[i+1]-a[i]))
					mini=a[i+1]-a[i];
			}
		}
		cout<<mini<<"\n";
	}
	return 0;
}