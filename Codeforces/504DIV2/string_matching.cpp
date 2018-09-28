#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,flag=-1,f=0,ind,i;
	cin>>n>>m;
	string s,t;
	cin>>s;
	cin>>t;
	for(i=0;i<s.size();i++)
		{
			if(s[i]=='*')
				{
					f=1;
					ind=i;
					break;
				}
		}
		if(f==1)
		{
			if(n-1>m)
				flag=0;
			else{
			for(i=0;i<ind;i++)
			{
				if(s[i]==t[i])
					continue;
				else
					{
						flag=0;
						break;
					}
			}
			//cout<<ind<<" "<<flag<<"\n";
			if(flag!=0)
			{
				int j=m-1;
				for(i=n-1;i>ind;i--)
				{
					if(j>=ind && s[i]==t[j])
						{
							j--;
							continue;
						}
					else
					{
						flag=0;
						break;
					}

				}
			}}
		}
		else
		{
			if(s==t)
				flag=1;
			else
				flag=0;
		}
	if(flag==0)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	return 0;
}
