#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,posx,posy,c=0,c2=0,f=0;
	cin>>n>>m;
	string s[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<m;j++)
		{
			c=0;
			if(s[i][j]=='B')
			{
				posx=i;
				f=1;
				c++;
				posy=j+1;
			}
		}
		if(f==1)
			break;
	}
	for(;i<=n;i++)
	{
		if(s[i][posx]=='B')
		{
			c2++;
		}
	}
	if(c==c2)
		cout<<(posx+c+1)/2<<" "<<((posy+c+1)/2);
