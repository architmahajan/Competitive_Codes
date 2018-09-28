#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,u,v,c=0,count1=0,count2=0,x,y,count11=0,count22=0;
	long long int sum=0;
	cin>>n>>m;
	set<int>a[n+1];
	set<int>:: iterator it,it1,it2;
	for(i=0;i<m;i++)
	{
		cin>>u>>v;
		a[u].insert(v);
		a[v].insert(u);
	}
	bool vis[n+1];
	for(i=1;i<=n;i++)
		vis[i]=false;
	for(i=1;i<=n;i++)
	{
		//cout<<i<<" "<<vis[i]<<"\n";
		if(vis[i]==true)
			continue;
		if(a[i].size()==0)
			{
				c++;
				continue;
			}
		else if(a[i].size()>0)
		{
			for(it=a[i].begin();it!=a[i].end();it++)
			{
				//cout<<*it<<"\n";
				x=*it;
				count1=0;count2=0;
				for(it1=a[x].begin();it1!=a[x].end();it1++)
				{
					//cout<<*it1<<"\n";
					if(*it1==i)
						continue;
					else if(a[i]==a[*it1])
					{
						count1++;
					}
					a[x].insert(x);
					a[*it1].insert(*it1);
					if(a[x]==a[*it1])
						count11++;
					a[x].erase(x);
					a[*it1].erase(*it1);
					if(i==*it1)
					{
						//cout<<*it1<<" ";
						y=(*it1);
						a[x].insert(x);
						a[*it1].insert(*it1);
						if(a[x]==a[*it1])
						{
							count2=a[x].size();
							for(it2=a[x].begin();it2!=a[x].end();it2++)
							{
								//cout<<*it2<<" ";
								vis[*it2]=true;
							}
							//cout<<"\n";
							sum+=(count2)*(count2-1)/2;
							a[x].erase(x);
							a[*it1].erase(*it1);
							continue;
						}
						a[x].erase(x);
						a[*it1].erase(*it1);
						for(it2=a[y].begin();it2!=a[y].end();it2++)
						{
							vis[*it2]=true;
							if(*it2==x)
								continue;
							else if(a[x]==a[*it2])
								count2++;
						}
						if(count2>0)
						{
							count2++;
							sum+=(count2)*(count2-1)/2;
						}
					}
					vis[*it1]=true;
				}
				if(count1>0)
				count1++;
				sum+=(count1)*(count1-1)/2;
				
				break;
			}
		}

	}
	sum+=(c)*(c-1)/2;
	cout<<sum<<"\n";
	return 0;
}