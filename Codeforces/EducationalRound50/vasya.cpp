#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,u,v,sum1,sum2,c1=0,i;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	cin>>m;
	long long int b[m];
	for(i=0;i<m;i++)
		scanf("%lld",&b[i]);
	u=0,v=0;
	sum1=0;
	sum2=0;
	while(sum1!=sum2 || (sum1==0 && sum2==0))
	{
		
		if(sum1<sum2) 
		{
			if(u<n)	{
				sum1+=a[u++];
				if(sum1==sum2)
				{
					c1++;
					sum1=0;
					sum2=0;
				}
			}
			else
				break;
		}
		else
		{
			if(v<m)	{
				sum2+=b[v++];
				if(sum1==sum2)
				{
					c1++;
					sum1=0;
					sum2=0;
				}
			}
			else
				break;
		}
	}
	if(c1>0 && u==n && v==m && sum1==sum2)
		cout<<c1;
	else
		cout<<"-1";
	return 0;
}