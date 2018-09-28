#include<iostream>
using namespace std;
int main()
{
	long long int n,k,s,x,a[1000005],prev=1,i,u,y,yy,xx;
	cin>>n>>k>>s;
	if(k*(n-1)<s || k>s)
		cout<<"NO\n";
	else
	{
		cout<<"YES\n";
		y=s-k;
		x=y/(n-1);
		y=x*(n-1);
		y=s-y;
		k-=x;
		for(i=0;i<x;i++)
		{
			if(prev==1)
				{
					a[u++]=n;
					prev=n;
				}
			else if(prev==n)
				{
					a[u++]=1;
					prev=1;
				}

		}
		s=y;
		x=s/k;
		y=s%k;
		x++;
		for(i=0;i<y;i++)
		{
			if(prev+x<=n)
			{
				a[u++]=prev+x;
				prev+=x;
			}
			else if(prev-x>=1)
			{
				a[u++]=prev-x;
				prev-=x;
			}
		}
		x--;
		for(i=0;i<k-y;i++)
		{
			if(prev+x<=n)
			{
				a[u++]=prev+x;
				prev+=x;
			}
			else if(prev-x>=1)
			{
				a[u++]=prev-x;
				prev-=x;
			}
		}
	}
	for(i=0;i<u;i++)
		cout<<a[i]<<" ";
	return 0;
}