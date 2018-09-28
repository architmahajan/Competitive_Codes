#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
multimap<long long int,long long int>mp;
multimap<long long int,long long int>::iterator it;
multimap<long long int,long long int>::iterator it1;
multimap<long long int,long long int>::iterator it2;
long long int p,q,c,m,x,y;
long long int count1=0,k=1000000007;

long long int dp[2500][2500];

long long int calc(ll g,ll b,ll x,ll gg,ll bb,int flag)
{
	if(dp[gg][bb]!=-1)
		{
			return dp[gg][bb];
		}
	if(x<c && flag==2)
		{
			return 0;
		}
	else
	{
		it1=mp.lower_bound(gg);
		it2=mp.upper_bound(gg);
		if(it1==mp.end())
		{

		}
		else
		{
			while(it1!=it2)
			{
				if(it1->first == gg && it1->second==bb)
				{
					return 0;
				}
				it1++;
			}
		}
	}
	if(g==0 && b==0)
		{
			if(gg==p && bb==q)
			{
				return 1;
			}
			return 0;

		}
	int xx,xxx;
	if(g>0)
	{
		xxx=calc(g-1,b,x+1,gg+1,bb,1);
		if(dp[gg][bb]==-1)
		dp[gg][bb]=(xxx)%k;
		else
			dp[gg][bb]+=(xxx)%k;
	}
	if(b>0)
	{
		xx=calc(g,b-1,x-1,gg,bb+1,2);
		if(dp[gg][bb]==-1)
		dp[gg][bb]=(xx)%k;
		else
		dp[gg][bb]+=(xx)%k;
	}
	return (dp[gg][bb]%k);
}
int main()
{
	cin>>p>>q>>c>>m;
	memset(dp,-1,sizeof(dp));
	int flag=0;
	ll mini=1000000000000000;
	while(m--)
	{
		cin>>x>>y;
		if(x>p || y>q)
			continue;
		if(mini>x && y==0)
			mini=x;
		mp.insert(pair<long long int ,long long int>(x,y));
	}
	count1=calc(p,q,0,0,0,1)%k;
	cout<<count1%k;
	return 0;
}