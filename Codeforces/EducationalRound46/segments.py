#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	std::ios::sync_with_stdio(false);
	set<long long int>s;
	set <long long int>::iterator it;
	int n;
	cin>>n;
	long long int a[n+1],l,r,b[2*n],u=0,i,count1=0,prev,flag=0;
	
	for(i=0;i<=n;i++)
		a[i]=0;
	map<long long int,int>mpl;
	map<long long int,int>mpr;
	for(i=0;i<n;i++)
	{
		cin>>l>>r;
		s.insert(l);
		s.insert(r);
		if(mpl.count(l))
			mpl[l]++;
		else
			mpl[l] = 1;
		if(mpr.count(r))
			mpr[r]++;
		else
			mpr[r] = 1;
	}
	for(it = s.begin();it != s.end();++it)
		b[u++]=*it;
	sort(b,b+u);
	count1=0;
	for(i=0;i<u;i++)
	{
		//cout<<b[i]<<endl;
		if(mpr[b[i]] && mpl[b[i]])
		{
			a[count1]+=b[i]-prev;
			//cout<<count1<<" "<<a[count1]<<" ";
			a[count1+mpl[b[i]]]++;
			count1-=mpr[b[i]];
			count1+=mpl[b[i]];
			prev=b[i]+1;
		}
		else if(mpr[b[i]])
		{
			a[count1]+=b[i]-prev+1;
			prev=b[i]+1;
			//cout<<count1<<" "<<a[count1]<<" ";
			count1-=mpr[b[i]];
		}
		else if(mpl[b[i]])
		{
				if(flag==0)
				{
					flag=1;
					prev=b[i];
					count1+=mpl[b[i]];
					continue;
				}
				a[count1]+=b[i]-prev;
				//cout<<count1<<" "<<a[count1]<<" ";
				count1+=mpl[b[i]];
				prev=b[i];
		}
		//cout<<count1<<endl;
	}
	
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0;
}