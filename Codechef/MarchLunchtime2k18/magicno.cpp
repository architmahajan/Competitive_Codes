#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,count1=0,i;
		cin>>n>>k;
		int a[n];
		long long int sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		for(i=0;i<n;i++)
		{
			if((sum-a[i])<(a[i]+k))
				count1++;
		}
		cout<<count1<<"\n";
	}
	return 0;
}

