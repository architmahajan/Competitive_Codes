#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j,xl=0,xr=0,yu=0,yd=0,cc=0,f1=0,f2=0,f3=0,f4=0,k;
		cin>>n>>m;
		int a[n],b[m];
		string s[n],ss;
		for(i=0;i<n;i++)
			a[i]=0;
		for(i=0;i<m;i++)
			b[i]=0;
		for(i=0;i<n;i++)
			{
				cc=0;
				cin>>s[i];
				for(j=0;j<m;j++)
					if(s[i][j]=='1')
						cc++;
				a[i]=cc;
			}
		cin>>ss;
		set<int>st;
		for(k=0;k<ss.size();k++)
		{
			if(ss[k]=='L' && !f1)
			{
				st.insert(k);
				f1=1;
			}
			else if(ss[k]=='R' && !f2)
			{
				st.insert(k);
				f2=1;
			}
			else if(ss[k]=='U' && !f3)
			{
				st.insert(k);
				f3=1;
			}
			else if(ss[k]=='D' && !f4)
			{
				st.insert(k);
				f4=1;
			}
		}
		f1=0,f2=0,f3=0,f4=0;
		for(k=ss.size()-1;k>=0;k--)
		{
			if(ss[k]=='L' && !f1)
			{
				st.insert(k);
				f1=1;
			}
			else if(ss[k]=='R' && !f2)
			{
				st.insert(k);
				f2=1;
			}
			else if(ss[k]=='U' && !f3)
			{
				st.insert(k);
				f3=1;
			}
			else if(ss[k]=='D' && !f4)
			{
				st.insert(k);
				f4=1;
			}
		}
		set<int>::iterator it;
		for(it=st.begin();it!=st.end();it++)
		{
			k=*it;
			for(j=0;j<m;j++)
				{
					cc=0;
					for(i=0;i<n;i++)
					{
						
						if(s[i][j]=='1')
							cc++;
					}
					b[j]=cc;
				}
			for(i=0;i<n;i++)
				{
					cc=0;
					for(j=0;j<m;j++)
					{
						
						if(s[i][j]=='1')
							cc++;
					}
					a[i]=cc;
				}
			if(ss[k]=='L')
			{
				for(i=0;i<n;i++)
					{
					for(j=0;j<a[i];j++)
						s[i][j]='1';
					for(;j<m;j++)
						s[i][j]='0';
					}
			}
			else if(ss[k]=='R')
			{
				for(i=0;i<n;i++)
					{
						for(j=0;j<m-a[i];j++)
							s[i][j]='0';
						for(;j<m;j++)
							s[i][j]='1';
					}
			}
			else if(ss[k]=='U')
			{
				for(j=0;j<m;j++)
					{
						for(i=0;i<b[j];i++)
						{
							s[i][j]='1';
						}
						for(;i<n;i++)
							s[i][j]='0';
					}
			}
			else if(ss[k]=='D')
			{
				for(j=0;j<m;j++)
					{
						for(i=0;i<n-b[j];i++)
						{
							s[i][j]='0';
						}
						for(;i<n;i++)
						s[i][j]='1';
					}
			}
		}
			
		for(i=0;i<n;i++)
			{
				cout<<s[i];
				cout<<"\n";
			}
	}
	return 0;
}