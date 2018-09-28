#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<set>
int main()
{
	long long int t,n,i,h;
	cin>>t;
	while(t--)
	{
		cin>>n>>h;
		long long int a[n],sum=0,mink,sh=0,xx,mid;
		for(i=0;i<n;i++)
			{
				cin>>a[i];
				sum+=a[i];
			}
			sort(a,a+n);
		mink=sum/h;
		xx=a[n-1];
		
		while(mink<xx)
		{
			mid=(mink+xx)/2;
			sh=0;
			for(i=0;i<n;i++)
			{
				if(a[i]%mid==0)
				{
                    sh+=a[i]/mid;
				}
				else
				{
					sh+=(a[i]/mid)+1;
				}
			}
			if(sh<=h)
			{
                xx=mid;
			}
			else
			{
				mink=mid+1;
			}
		}
		cout<<mink<<"\n";
	}
	return 0;
}
