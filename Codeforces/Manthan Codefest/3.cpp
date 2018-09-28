#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s,t;
	cin>>n;
	cin>>s;
	cin>>t;
	int a[n],b[n],u=0,v=0,ans=0,f=0,i,ind;
	for(i=0;i<n;i++)
	{
		if(s[i]!=t[i])
		{
			//cout<<i<<" "<<ind<<" "<<f<<"\n";
			if(s[i]=='1')
			{
				if(f==2)
				{
					if(i-ind<=1)
					{
						ans+=i-ind;
						f=0;
					}
					else
					{
						ans+=1;
						ind=i;
						f=1;
					}
					continue;
				}
				else if(f==1)
					ans+=1;
				ind=i;
				f=1;
			}
			else
			{
				if(f==1)
				{
					if(i-ind<=1)
					{
						ans+=i-ind;
						f=0;
					}
					else
					{
						ans+=1;
						ind=i;
						f=2;
					}
					continue;
				}
				else if(f==2)
					ans++;
				ind=i;
				f=2;
			}
		}
	}
	if(f==1 || f==2)
		ans++;
	cout<<ans;
	return 0;
}