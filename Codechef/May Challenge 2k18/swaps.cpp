#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[100000],b[100000],x,i,flag=0,j;
		long long int sum1=0,sum2=0;
		for(i=0;i<10005;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(i%2==0)
				a[x]++;
			else
				b[x]++;
		}
		for(i=10004;i>0;i--)
		{
			if(a[i]>0)
			{
				for(j=1;j<10005;j++)
				{
					if(a[i]>0 && i>j)
					{
						while(b[j]>0 && a[i]>0)
						{
							if(i>j && k>0)
							{
								a[i]--;
								a[j]++;
								b[j]--;
								b[i]++;
								k--;
							}
							else if(k==0)
							{
								flag=1;
								break;
							}
						}
						if(flag==1)
						{
							flag=2;
							break;
						}
					}
					else 
						break;
				}
				if(flag==2)
					break;
			}
		}
		for(i=1;i<=10005;i++)
		{
			if(a[i]>0)
				sum1+=(a[i]*i);
			if(b[i]>0)
				sum2+=(b[i]*i);
		}
		//cout<<sum1<<" "<<sum2<<"\n";
		if(sum2>sum1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}