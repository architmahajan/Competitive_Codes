#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int n,m,i,j,count1=0;
	cin>>n>>m;
	int a[m],b[n+1];
	for(i=1;i<=n;i++)
		b[i]=0;
	for(i=0;i<m;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
	{
		b[a[i]]++;
		for(j=1;j<=n;j++)
		{
			//cout<<b[j]<<" ";
			if(b[j]==0)
				break;
		}
		//cout<<"\n";
		if(j==n+1)
		{
			count1++;
			for(j=1;j<=n;j++)
			{
				b[j]-=1;
			}	
		}
	}
	cout<<count1;
	return 0;
}