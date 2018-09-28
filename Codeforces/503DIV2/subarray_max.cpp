#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,j,pos,f=0,ans
		cin>>n,i,j;
		long long int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(a[j]<=a[i])
					pos=j;
			}
			if(pos>=i && f==0)
				{
					ans=pos-i+1;
					f=1;
				}
			else
			{
				ans=max(ans,pos-i+1);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}