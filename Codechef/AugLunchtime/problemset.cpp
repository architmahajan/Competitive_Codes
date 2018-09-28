#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j;
		cin>>n>>m;
		string s1,s2,ans1="";
		
		for(i=0;i<n;i++)
		{
			cin>>s1>>s2;
			if(s1=="correct")
			{
				for(j=0;j<m;j++)
				{
					if(s2[j]=='1')
						continue;
					else
						{
							ans1="INVALID";
							break;
						}
				}
			}
			else if(s1=="wrong")
			{
				int c1=0;
				for(j=0;j<m;j++)
				{
					if(s2[j]=='0')
						{
							break;
						}
					else
						c1++;
				}
				if(c1==m)
				{
					if(ans1=="INVALID")
					{

					}
					else
					{
						ans1="WEAK";
					}
				}
			}
		}
		if(ans1=="")
			ans1="FINE";
		cout<<ans1<<"\n";
	}
	return 0;
}
