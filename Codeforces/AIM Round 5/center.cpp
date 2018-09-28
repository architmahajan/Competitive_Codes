#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,posx,posy,c=0,c2=0,f=0,i,j;
	cin>>n>>m;
	string s[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(i=1;i<=n;i++)
	{
		c=0;
		for(j=0;j<m;j++)
		{
			
			if(s[i][j]=='B')
			{
				if(f==0)
				posy=j+1;
				posx=i;
				f=1;
				c++;

			}
		}
		if(f==1)
			break;
	}
	for(;i<=n;i++)
	{
		if(s[i][posy-1]=='B')
		{
			c2++;
		}
	}
	//cout<<posx<<" "<<posy<<" "<<c<<" "<<c2<<"\n";
	if(c==c2)
		cout<<(posx+c/2)<<" "<<(posy+c/2);
	return 0;
}
