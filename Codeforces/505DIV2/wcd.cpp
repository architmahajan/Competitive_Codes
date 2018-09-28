#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
int nn,flag=0;
long long int aa[100005],bb[100005],cc[100005];
ll gcd(ll a,ll b)
{
	if(a==0)
		return b;
	else
	{
		return(gcd(b%a,a));
	}
}

int main()
{
	long long int i,ans;
	cin>>nn;
	for(i=1;i<=nn;i++)
	{
		cin>>aa[i]>>bb[i];
		ans=aa[i]*bb[i];
		ans/=gcd(aa[i],bb[i]);
		cc[i]=ans;
		cout<<ans<<"\n";
	}
	ans=aa[1];
	for(i=2;i<=nn;i++)
	{
		ans=gcd(ans,bb[i]);
		cout<<ans<<"\n";
	}

}