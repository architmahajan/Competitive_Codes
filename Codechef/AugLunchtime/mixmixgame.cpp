#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,z1,z2,i,winner=0,op,j,c1=0,c2=0;
		cin>>n>>z1>>z2;
		long long int a[n],x,y;

		for(i=0;i<n;i++)
			cin>>a[i];
		if(n==1)
		{
			x=a[0];
			if(x==z1 || x==z2 || -x==z1 || -x==z2)
			{
				winner=1;
			}
			if(winner==1)
			{
				cout<<winner<<"\n";
				continue;
			}
			else
			{
				x=a[0];
				y=a[0];
				if(x-y==z1||x-y==z2||x+y==z1||x+y==z2)
					c1++;
				if(-x-y==z1||-x-y==z2||-x+y==z1||-x+y==z2)
					c2++;
				if(c1==1 && c2==1)
					winner=2;
				cout<<winner<<"\n";
				continue;
			}
		}
		for(i=0;i<n;i++)
		{
			x=a[i];
			if(x==z1 || x==z2 || -x==z1 || -x==z2)
			{
				winner=1;
				break;
			}
			
		}
		if(winner==1)
		{
			cout<<winner<<"\n";
			continue;
		}
		for(i=0;i<n;i++)
		{
			x=a[i];
			for(j=0;j<n;j++)
			{
				y=a[j];
				if(x-y==z1||x-y==z2||x+y==z1||x+y==z2)
					{
						c1++;
						break;
					}
			}
			x=-a[i];
			for(j=0;j<n;j++)
			{
				y=a[j];
				if(x-y==z1||x-y==z2||x+y==z1||x+y==z2)
					{
						c2++;
						break;
					}
			}

		}
		long long int comp=n;
		if(c1==comp && c2==comp)
			winner=2;
		cout<<winner<<"\n";
	}
	return 0;
}

