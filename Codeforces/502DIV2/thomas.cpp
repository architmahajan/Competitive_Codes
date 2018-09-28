#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,i;
	cin>>n;
	int a[n][4],sum[n],t=0,cc=0;
	for(i=0;i<n;i++)
	{
		s=0;
		cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
		s=a[i][0]+a[i][1]+a[i][2]+a[i][3];
		if(i==0)
		t=s;
		sum[i]=s;
	}
	sort(sum,sum+n);
	for(i=n-1;i>=0;i--)
	{	
		if(sum[i]>t)
			cc++;
		else if(sum[i]==t)
			{
				cout<<cc+1<<"\n";
				break;
			}
	}
	return 0;
}

