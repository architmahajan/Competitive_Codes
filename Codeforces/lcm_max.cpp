#include<iostream>
using namespace std;
long long int gcd(long long int a,long long int b)
{
	if(a==0)
		{
			return b;
		}
	else
	{
		return gcd(b%a,a);
	}
}
long long int lcm(long long int i,long long int j,long long int k)
{
	long long int ans=(i*j)/gcd(i,j);
	ans=(ans*k)/(gcd(ans,k));
	return ans;
}
int main()
{
	long long int n,i,j,k;
	cin>>n;
	long long int ans=0,lcmans=0;
	if(n==1)
		cout<<"1";
	else if(n==2)
		cout<<"2";
	else if(n==3)
		cout<<"6";
	else{
	if(n%2)
	{
		ans=n*(n-1)*(n-2);
	}
	else
	{
		ans=(n-1)*(n-2)*(n-3);
		for(i=n;i>=n-50 && i>0;i--)
		{
			for(j=n;j>=n-50&& j>0;j--)
			{

				for(k=n;k>=n-50 && k>0;k--)
				{	
					lcmans=lcm(i,j,k);
					//cout<<i<<" "<<j<<" "<<k<<" "<<" "<<lcmans<<"\n";
					if(lcmans>ans)
						ans=lcmans;
				}

			}
		}
	}
	cout<<ans;}
	return 0;
}