#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,x,i,j;
	string s;
	cin>>n;
	vector<pair<ll,string>>v;
	ll a[3]={0},b[8];
	for(i=0;i<8;i++)
		b[i]=-1;
	for(j=0;j<n;j++)
	{
		cin>>x>>s;
		v.push_back(make_pair(x,s));
		sort(s.begin(),s.end());
		for(i=0;i<s.size();i++)
		{
			if(s[i]=='A')
				a[s[i]-'A']=1;
			else if(s[i]=='B')
				a[s[i]-'A']=1;
			else if(s[i]=='C')
				a[s[i]-'A']=1;
		}
		if(s=="A")
		{
			if(b[0]==-1)
			b[0]=x;
			else
				b[0]=min(b[0],x);

		}
		else if(s=="B")
		{
			if(b[1]==-1)
			b[1]=x;
			else
				b[1]=min(b[1],x);

		}
		else if(s=="C")
		{
			if(b[2]==-1)
			b[2]=x;
			else
				b[2]=min(b[2],x);

		}
		else if(s=="AB")
		{
			if(b[3]==-1)
			b[3]=x;
			else
				b[3]=min(b[3],x);

		}
		else if(s=="AC")
		{
			if(b[4]==-1)
			b[4]=x;
			else
				b[4]=min(b[4],x);

		}
		else if(s=="BC")
		{
			if(b[5]==-1)
			b[5]=x;
			else
				b[5]=min(b[5],x);

		}
		else if(s=="ABC")
		{
			if(b[6]==-1)
			b[6]=x;
			else
				b[6]=min(b[6],x);

		}
	}
	for(i=0;i<3;i++)
	{
		if(a[i]==0)
		{
			cout<<"-1\n";
			return 0;
		}
	}
	ll mini=-1;
	if(b[6]!=-1)
	{
		if(mini==-1)
			mini=b[6];
		else
			mini=min(mini,b[6]);
	}
	if(b[0]!=-1 && b[1]!=-1 && b[2]!=-1)
	{
		if(mini==-1)
			mini=b[0]+b[1]+b[2];
		else
			mini=min(mini,b[0]+b[1]+b[2]);
	}
	if(b[3]!=-1 && b[2]!=-1)
	{
		if(mini==-1)
			mini=b[2]+b[3];
		else
			mini=min(mini,b[2]+b[3]);
	}
	if(b[4]!=-1 && b[1]!=-1)
	{
		if(mini==-1)
			mini=b[4]+b[1];
		else
			mini=min(mini,b[4]+b[1]);
	}
	if(b[5]!=-1 && b[0]!=-1)
	{
		if(mini==-1)
			mini=b[5]+b[0];
		else
			mini=min(mini,b[5]+b[0]);
	}
	if(b[3]!=-1 && b[5]!=-1)
	{
		if(mini==-1)
			mini=b[5]+b[3];
		else
			mini=min(mini,b[5]+b[3]);
	}
	if(b[3]!=-1 && b[4]!=-1)
	{
		if(mini==-1)
			mini=b[3]+b[4];
		else
			mini=min(mini,b[3]+b[4]);
	}
	if(b[4]!=-1 && b[5]!=-1)
	{
		if(mini==-1)
			mini=b[5]+b[4];
		else
			mini=min(mini,b[5]+b[4]);
	}
	cout<<mini<<"\n";
	return 0;
}