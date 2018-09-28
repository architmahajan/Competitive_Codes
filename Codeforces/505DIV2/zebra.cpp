#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,c1=0,maxi=-1,u=0;
	string s;
	cin>>s;
	char c=s[0];
	char prev=s[0];
	vector<pair<char,char>>v;
	n=s.size();
	int b[n];
	c1=1;
	for(i=1;i<s.size();i++)
	{	
		if(s[i]!=c)
			{
				c1++;
				c=s[i];
			}
		else if(s[i]==c)
		{
			if(c1>maxi)
				maxi=c1;
			v.push_back({prev,c});
			b[u++]=c1;
			c1=1;
			c=s[i];
			prev=s[i];

		}
	}
	if(c1>maxi)
		maxi=c1;
	v.push_back({prev,c});
	b[u++]=c1;
	int ln=v.size();
	if(v[ln-1].second!=v[0].first && ln!=1)
		c1=b[0]+b[ln-1];
	if(c1>maxi)
		maxi=c1;
	cout<<maxi;
	return 0;

	

}