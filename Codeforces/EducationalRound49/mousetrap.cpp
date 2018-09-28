#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c[n+1],a[n+1],trap[n+1],mini,sum=0,i,b[n+1],pos,start,j,ff=0,vis[n+1];
	for(i=1;i<=n;i++)
		scanf("%d",&c[i]);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		trap[i]=0,vis[i]=0,b[i]=0;
	for(i=1;i<=n;i++)
	{
		cout<<i<<"\n";
		int f=0;
		if(vis[i]==1)
			continue;
		start=i;
		b[i]=1;
		ff=0;
		while(b[start]!=2)
		{
			//cout<<start<<"\n";
			cout<<start<<" "<<b[start]<<"\n";
			
			if(trap[start]==1 || vis[start]==1)
				{
					f=1;
					break;
				}
			vis[start]=1;
			start=a[start];
			b[start]++;
			if(b[start]>2)
			{
				if(vis[i]==1 || trap[start]==1)
				{
					cout<<"break"<<start<<"\n";
					f=1;
					break;
				}
			}
			if(b[start]==2 && ff==0)
			{
				mini=c[start];
				pos=start;
				ff=1;
				//cout<<mini<<" "<<start<<"\n";
			}
			if(mini>c[start] && ff==1)
				{
					mini=c[start];
					pos=start;
					//cout<<mini<<" "<<start<<"\n";
				}

			
		
		
	}
		cout<<"\n"<<f<<"\n";
		if(f==0)
			cout<<mini<<"\n",sum=sum+mini;

	}
	cout<<sum;
	return 0;
}