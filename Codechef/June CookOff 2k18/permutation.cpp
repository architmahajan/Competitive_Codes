#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,i,count1=0,c=0,ans=0,f=0;
		cin>>n>>k;
		int a[n+1],b[n+1],cc[n+1];
		for(i=0;i<n;i++)
			{
				b[i]=i+1;
			}
			for(i=1;i<=n;i++)
				cc[i]=-1;
		for(i=0;i<n;i++)
			{
				cin>>a[i];
				if(a[i]==0)
					continue;
				if(a[i]>0)
					count1++;
				if(cc[a[i]]==-1)
					cc[a[i]]=1;
				else if(cc[a[i]]==1)
					f=1;
			}
			if(f==1)
				{
					cout<<"0"<<endl;
					continue;
				}
		do
		{
			int flag=0;
			c=0;
			for(i=0;i<n;i++)
				{
					if(a[i]==b[i])
						{
							c++;
						}
				}
			if(c==count1){
			c=0;
			for(i=1;i<n;i++)
				{
					if(b[i]>b[i-1])
					c++;
				}
				/*for(i=0;i<n;i++)
					cout<<b[i]<<" ";
					cout<<endl;	
					cout<<c<<endl;*/

				if(c==k)
				ans++;
		}
		}while(next_permutation(b,b+n));

		cout<<ans<<endl;
	}
	return 0;
}