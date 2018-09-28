#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define ma 1000000007
long long int modp(long long int value,long long int n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return (value%ma);
	else if(n%2==0)
	{
		return(modp(((value%ma)*(value%ma))%ma,n/2));
	}
	else
	{
		return(((value%ma)*(modp(value%ma,n-1)))%ma);
	}
}
int main()
{
	long long int t,i,j,n;
	cin>>t;
	while(t--)
	{
		long long int n,w,x,ans=10,y,N,value;
		cin>>n>>w;
		if(abs(w)>9)
		{
			cout<<"0\n";
			continue;
		}
		else if(w>=0)
		{
			x=9-w;
		}
		else if(w<0)
		{
			x=9+w+1;
		}
		n=n-2;
			value=10;
			ans=(modp(value,n)%ma);
			//cout<<ans<<" "<<x<<" ";
			ans=((x%ma)*(ans%ma))%ma;
		cout<<ans%ma<<"\n";
	}
	return 0;
}

