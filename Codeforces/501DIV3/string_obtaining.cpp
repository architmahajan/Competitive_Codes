#include<iostream>
using namespace std;
int main()
{
	int n,flag=0,i,j,k,aa[1000000],u=0;
	string s,t;
	cin>>n;
	cin>>s>>t;
	int a[27],b[27];
	for(i=0;i<27;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	for(i=0;i<n;i++)
		{
			a[s[i]-'a']++;
			b[t[i]-'a']++;
		}
	for(i=0;i<26;i++)
		if(a[i]!=b[i])
		{
			cout<<"-1\n";
			flag=1;
			break;
		}
	if(flag==0){
	for(i=0;i<n;i++)
	{
		if(s[i]==t[i])
			continue;
		else
		{
			for(j=i+1;j<n;j++)
			{
				if(t[i]==s[j])
				{
					for(k=j;k>i;k--)
					{
						aa[u++]=k;
						char c=s[k];
						s[k]=s[k-1];
						s[k-1]=c;
					}
					break;
				}
			}
		}
	}
	cout<<u<<"\n";
	for(i=0;i<u;i++)
		cout<<aa[i]<<" ";}
	return 0;
}
