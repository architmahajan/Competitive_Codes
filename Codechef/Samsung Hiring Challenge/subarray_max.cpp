#include<iostream>
using namespace std;
long long int res=0,ans=0,n,a[1000010];
int fxn(long long int low,long long int high)
{
	if(low<=high)
	{

	}
	else
		return 0;
	int f=0,j;
	int mid=(low+high)/2;
	//cout<<low<<" "<<high<<" "<<mid<<"\n";
	for(j=1;j<=n-mid;j++)
	{
		if(a[j]>=a[j+mid])
			{
				ans=mid;
				f=1;
				break;
			}
	}
	if(f==1)
		{
			fxn(mid+1,high);
			res=max(ans,res);
		}
	else
	{
		fxn(mid+1,high);
		fxn(low,mid-1);

	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int i,j,pos,f=0,low,high;
		cin>>n;
		low=1;
		high=n;
		for(i=1;i<=n;i++)
			cin>>a[i];
		/*for(i=n-1;i>=1;i--)
		{
			for(j=1;j<=n-i;j++)
			{
				if(a[j]>=a[j+i])
					{
						ans=i;
						f=1;
						break;
					}
			}
			if(f==1)
				break;
		}*/
		/*while(low<=high)
		{
			f=0;
			int mid=(low+high)/2;
			cout<<low<<" "<<high<<" "<<mid<<"\n";
			for(j=1;j<=n-mid;j++)
			{
				if(a[j]>=a[j+mid])
					{
						ans=mid;
						f=1;
						break;
					}
			}
			if(f==1)
				low=mid+1;
			else
			{

			}

		}*/
		fxn(1,n);
		cout<<res+1<<"\n";
	}
	return 0;
}