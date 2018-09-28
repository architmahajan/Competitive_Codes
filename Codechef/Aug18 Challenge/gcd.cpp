#include<bits/stdc++.h>
using namespace std;
long long int con=1000000007 ;
long long int gcd(long long int a, long long int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long int a,b,n,x,y,xxx,yyy,xxxx,yyyy,i,yy;
		cin>>a>>b>>n;
		
		t-=1;
		x=abs(a-b);
		a%=con;
		b%=con;
		if(x>0)
		{
			a=a%x;
			b=b%x;
			xxx=a;
			yyy=b;
			xxxx=a;
			yyyy=b;
			if(n>1000000)
				{
					for (i=1;i<1000001;i++)
					{	a=a*xxx;
						a%=x;
					}
					y=n/1000000;
					y=int(y);
					for(i=0;i<y;i++)
					{
						a=a*xxx;
						a%=x;
					}
					yy=n%1000000;
					for(i=1;i<yy;i++)
					{
						xxxx*=xxx;
						xxxx%=x;
					}
					a=((a%x)*(xxxx%x))%x;
					for (i=1;i<1000001;i++)
					{
						b=b*yyy;
						b%=x;
					}
					y=n/1000000;
					y=int(y);
					for (i=0;i<y;i++)
					{
						b=b*yyy;
						b%=x;
					}
					yy=n%1000000;
					for (i=1;i<yy;i++)
					{
						yyyy*=yyy;
						yyyy%=x;
					}
					b=((b%x)*(yyyy%x))%x;
				}
				else
				{
					for (i=1;i<n;i++)
					{
						a=a*xxx;
						a%=x;
					}
					for (i=1;i<n;i++)
					{	
						b=b*yyy;
						b%=x;
					}
				}
			a=(a%x+b%x)%x;
			a=gcd(a,x);
			cout<<a%con<<"\n";
		}
		else
			{
				x=con;
				xxx=a;
				yyy=b;
				xxxx=a;
				yyyy=b;
				if(n>1000000)
				{//cout<<a<<b<<"\n";
					for (i=1;i<1000001;i++)
					{	a=a*xxx;
						a%=x;
					}
					y=n/1000000;
					y=int(y);
					for(i=0;i<y;i++)
					{
						a=a*xxx;
						a%=x;
					}
					yy=n%1000000;
					for(i=1;i<yy;i++)
					{
						xxxx*=xxx;
						xxxx%=x;
					}
					a=((a%x)*(xxxx%x))%x;
					for (i=1;i<1000001;i++)
					{
						b=b*yyy;
						b%=x;
					}
					y=n/1000000;
					y=int(y);
					for (i=0;i<y;i++)
					{
						b=b*yyy;
						b%=x;
					}
					yy=n%1000000;
					for (i=1;i<yy;i++)
					{
						yyyy*=yyy;
						yyyy%=x;
					}
					b=((b%x)*(yyyy%x))%x;
				}
				else
				{
					for (i=1;i<n;i++)
					{
						a=a*xxx;
						a%=x;
					}
					for (i=1;i<n;i++)
					{	
						b=b*yyy;
						b%=x;
					}
				}
					a=((a%x)+(b%x))%x;
					cout<<a<<"\n";
		}
	}
	return 0;
}



