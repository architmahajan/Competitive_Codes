#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,ans,x,y,k;
	cin>>n>>k;
	if(k%2==1)
	{
		x=k/2;
		y=x+1;
		if(n<k)
		{
			ans=n-y+1;
		}
		else
		{
			ans=(k-1)-y+1;
		}

	}
	else
	{
		x=k/2;
		y=k/2;
		if(n<k)
		{
			ans=n-y;
		}
		else
		{
			ans=k-1-y;
		}
	}
	if(ans<=0)
		cout<<"0";
	else
	cout<<ans<<"\n";
	return 0;
}