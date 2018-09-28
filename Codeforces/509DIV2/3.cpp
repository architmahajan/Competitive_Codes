#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	vector<pair<ll,ll>>v;
	queue<ll>qq;

	ll n,m,d;
	cin>>n>>m>>d;
	ll a[n],b[n],c=1,cc[n+1],i,j,f=0,xx;
	for(i=0;i<n;i++)
		b[i]=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		v.push_back(make_pair(a[i],i));
	}
	sort(v.begin(),v.end());
	b[v[0].second]=c;
	cc[c]=v[0].first+1;

	qq.push(c);
	for(i=1;i<n;i++)
	{	
		f=0;
		/*for(j=1;j<=c;j++)
		{
			if(v[i].first-cc[j]>=d)
			{
				b[v[i].second]=j;
				cc[j]=v[i].first+1;
				f=1;
				break;
			}
		}*/
		xx=qq.front();
		if(v[i].first-cc[xx]>=d)
		{
			b[v[i].second]=xx;
			cc[xx]=v[i].first+1;
			f=1;
			qq.pop();
			qq.push(xx);
		}
		if(f==0)
		{
			c+=1;
			b[v[i].second]=c;
			cc[c]=v[i].first+1;
			qq.push(c);
		}

	}	
	cout<<c<<"\n";
	for(i=0;i<n;i++)
		cout<<b[i]<<" ";
	return 0;
}