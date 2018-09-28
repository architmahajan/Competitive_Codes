#include<bits/stdc++.h> 
using namespace std;
 
typedef long long int ll;
 
int main()
{	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll n,k,i,x,y,freq2,freq1,freq;
		ll ans=0;
		scanf("%lld%lld",&n,&k);
		ll a[n],b[100101];
		for(i=0;i<100001;i++)
			b[i]=0;
		for(i=0;i<n;i++)
			{
				scanf("%lld",&a[i]);
				b[a[i]]++;
				x=a[i];
				y=k-a[i];
				if(y>0){
				if(b[y] && x!=y)
				{
					ans+=b[y];
				}
				else if(x==y && b[y] )
					ans=ans+b[y]-1;
				}

			}
		printf("%lld\n",ans );
	}
    return 0;
}