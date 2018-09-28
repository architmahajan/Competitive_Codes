#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<set>
int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		set<int>ss;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			{
				cin>>a[i];
				ss.insert(a[i]);
			}
			cout<<n-(ss.size())<<"\n";
	}
	return 0;
}