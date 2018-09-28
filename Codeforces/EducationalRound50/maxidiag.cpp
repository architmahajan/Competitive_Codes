#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,k,q,temp,ext,rem;
	cin>>q;
	while(q--)
	{
		cin>>n>>m>>k;
		if(m>n)
		{
			temp=m;
			m=n;
			n=temp;
		}
		if(k<n)
		{
			cout<<"-1\n";
		}
		else
		{
			ext=k-m;
			rem=n-m;
			if(ext%2==0 && rem%2==0)
			{
				cout<<m+ext<<"\n";
			}
			else if(rem%2==0 && ext%2==1)
			{
				cout<<m+ext-2<<"\n";
			}
			else if(rem%2==1 && ext%2==0)
			{
				cout<<m+(ext-1)<<"\n";
			}
			else if(rem%2==1 && ext%2==1)
			{
				cout<<m+(ext-1)<<"\n";
			}
		}
	}
	return 0;
}