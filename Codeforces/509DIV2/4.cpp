#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,h,sum=0,hh=0,maxi,i,x,y,u,sum1=0;
	cin>>n>>h;
	vector<pair<ll ,ll>>v;
	ll pref[n],pref1[n];
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
	
	for(i=0;i<n;i++)
	{
		//cout<<"x "<<v[i/2].second<<" "<<v[i/2].first<<"\n";
		sum+=v[i].second-v[i].first;
		if(i<n-1)
		sum1+=v[i+1].first-v[i].second;
		pref1[i]=sum;
		if(i<n-1)
		pref[i]=sum1;
			
	}
	/*for(i=0;i<n;i++)
		cout<<pref[i]<<" ";
	cout<<"\n";
	for(i=0;i<n;i++)
		cout<<pref1[i]<<" ";*/
	maxi=-1;
	for(i=0;i<n;i++)
	{
		ll val=0;
		if(i)
			val=pref[i-1];
		int ind=lower_bound(pref,pref+n-1,val+h)-pref;
		ll ans=pref1[ind];

		if(i)
			ans-=pref1[i-1];
		//cout<<ans<<" ";
		maxi=max(ans+h,maxi);	
	}
	cout<<maxi;
	return 0;
}

