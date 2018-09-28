#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,s,y,i;
		double time=0.0,ttcar,ttchef,dischef,discar;
		cin>>n>>s>>y;
		long long int v[n],d[n],p[n],c[n];
		for(i=0;i<n;i++)
			cin>>v[i];
		for(i=0;i<n;i++)
			cin>>d[i];
		for(i=0;i<n;i++)
			cin>>p[i];
		for(i=0;i<n;i++)
			cin>>c[i];
		for(i=0;i<n;i++)
		{
			//cout<<time<<"\n";
			int flag=0;
			ttchef=(y*1.0)/s;
			if(d[i]==0 && p[i]-c[i]<=0)
				{
					time+=ttchef;
					continue;
				}
			else if(d[i]==0)
			ttcar=(p[i]*1.0)/v[i];
			else if(d[i]==1 && (p[i]-c[i]>=0))
				{
					time+=ttchef;
						continue;
				}
			else
			{
				p[i]=abs(p[i]);
				ttcar=(p[i]*1.0)/v[i];
			}
			if(time<ttcar)
				ttcar-=time;
			else
				{
					ttcar=((p[i]+c[i]+0.000001)*1.0)/v[i];
					if(time<ttcar)
						ttcar=0;
					else
						{
							time+=ttchef;
							continue;
						}
				}
			if((ttchef<ttcar))
				time+=ttchef;
			else
			{
				ttcar=(p[i]+c[i]+0.000001)/(v[i]*1.0)-(1.0*time);
				time+=(ttcar*1.0);
				time+=(1.0*ttchef);
			}
			
		}
		printf("%.9lf\n",time);
	}
	return 0;
}