#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	long long int n,m,sum=0,count1=0,x,i;
	cin>>n>>m;
	long long int a[n],b[n],c[n];
	for(i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
			c[i]=a[i]-b[i];
			sum+=a[i];
		}
	sort(c,c+n);
	x=n-1;
	while(sum>m && x>=0)
	{
		//cout<<sum<<" ";
		sum-=c[x];
		x--;
		count1++;
	}
	if(sum<=m)
		cout<<count1<<"\n";
	else
		cout<<"-1\n";
	return 0;

}