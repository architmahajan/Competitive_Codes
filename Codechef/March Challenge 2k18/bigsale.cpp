#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int q[n],d[n],i;
		double tot=0,p[n],pp[n];
		for(i=0;i<n;i++)
			{
				cin>>p[i]>>q[i]>>d[i];
				pp[i]=p[i]+(d[i]*p[i])/100.0;
				//cout<<pp[i]<<" ";
				pp[i]=pp[i]-((pp[i]*d[i])/100.0);
				//cout<<pp[i]<<" ";
				pp[i]=p[i]-pp[i];
				//cout<<pp[i]<<" ";
				pp[i]*=q[i];
				//cout<<pp[i]<<"\n";
				tot+=pp[i];

			}
		printf("%.9lf\n",tot);
	}
	return 0;
}
        