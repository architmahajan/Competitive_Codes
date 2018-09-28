#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,f1=0,f2=0,flag=0;
		char xx,yy,xxx,yyy;
		cin>>n;
		string s;
		cin>>s;
		x=n/2;
		int i;
		for(i=0;i<x;i++)
		{
			if(s[i]=='a')
			{
				xx='b';
				f1=1;
			}
			else if(s[i]=='z')
			{
				yy='y';
				f1=2;
			}
			else
			{
				xx=s[i]+1;
				yy=s[i]-1;
				f1=3;
			}
			if(s[n-i-1]=='a')
			{
				xxx='b';
				f2=1;
			}
			else if(s[n-i-1]=='z')
			{
				yyy='y';
				f2=2;
			}
			else
			{
				xxx=s[n-i-1]+1;
				yyy=s[n-i-1]-1;
				f2=3;
			}
			if(f1==1 && f2==1)
			{
				if(xx==xxx)
					continue;
				else
					{
						flag=1;
						break;
					}
			}
			else if(f1==1 && f2==2)
			{
				if(xx==yyy)
					continue;
				else
					{
						flag=1;
						break;
					}
			}
			else if(f1==1 && f2==3)
			{
				if(xx==yyy || xx==xxx)
					continue;
				else
					{
						flag=1;
						break;
					}
			}
			if(f1==2 && f2==1)
			{
				if(yy==xxx)
					continue;
				else
					{
						flag=1;
						break;
					}
			}
			else if(f1==2 && f2==2)
			{
				if(yy==yyy)
					continue;
				else
					{
						flag=1;
						break;
					}
			}
			else if(f1==2 && f2==3)
			{
				if(yy==yyy || yy==xxx)
					continue;
				else
					{
						flag=1;
						break;
					}
			}
			else if(f1==3 && f2==1)
			{
				if(yy==xxx || xx==xxx )
					continue;
				else
					{
						flag=1;
						break;
					}
			}
			else if(f1==3 && f2==2)
			{
				if(yy==yyy || xx==yyy )
					continue;
				else
					{
						flag=1;
						break;
					}
			}
			else if(f1==3 && f2==3)
			{
				if(yy==yyy || xx==yyy ||xx==xxx || yy==xxx)
					continue;
				else
					{
						flag=1;
						break;
					}
			}
		}
		if(flag==1)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}