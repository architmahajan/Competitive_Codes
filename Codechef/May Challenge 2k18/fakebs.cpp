#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,q,i,ind,x,l,r,low,high,count1=0,flag=0,mid;
		cin>>n>>q;
		long long int a[n+1];
		vector< pair <long long int,long long int> > v;
		vector<long long int>v1;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			v.push_back( make_pair(a[i],i) );
			v1.push_back(a[i]);
		}
		sort(v1.begin(),v1.end());
		sort(v.begin(),v.end());
		/*for(i=0;i<n;i++)
			cout<<v1[i]<<" ";
		cout<<"\n";
		for(i=0;i<n;i++)
			cout<<v[i].first<<" "<<v[i].second<<"\n";*/
		while(q--)
		{
			int s=0,b=0,temp;
			count1=0;
			flag=0;
			cin>>x;
			ind=lower_bound(v1.begin(),v1.end(),x)-v1.begin();
			l=ind;
			r=n-ind-1;
			//cout<<ind<<" ";
			ind=v[ind].second;
			//cout<<ind<<"\n";
			low=1;high=n;
			while(low<=high)
			{
				mid=(low+high)/2;
				//cout<<mid<<" ";
				if(ind==mid)
					break;
				else if(mid<ind)
				{
					if(a[mid]<x)
					{
						low=mid+1;
						l--;
					}
					else
					{
						s++;
						low=mid+1;
					}
				}
				else
				{
					if(a[mid]>x)
					{
						high=mid-1;
						r--;
					}
					else
					{
						b++;
						high=mid-1;
					}
				}
			}
			temp=b>s?b:s;
			l-=temp;
			r-=temp;
			//cout<<"\n";
			if(l<0 ||r<0)
				cout<<"-1\n";
			else
				cout<<temp<<"\n";
		}


	}
	return 0;
}