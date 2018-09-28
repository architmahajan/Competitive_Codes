#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int counta=0,countb=0,sum1=0,i,n,sum=0,x,l;
		string s,t;
		cin>>s>>n;
		l=s.size();
		long long int aa[l],b[l];
		for(i=0;i<l;i++)
		{
			if(s[i]=='a')
			{
				counta++;
				if(counta>countb)
					sum1++;
			}
			else if(s[i]=='b')
			{
				countb++;
				if(counta>countb)
					sum1++;
			}
			aa[i]=counta;
			b[i]=countb;
		}
		if(counta==countb || n==1)
			{
				cout<<sum1*n<<"\n";
				continue;
			}
		for(i=0;i<l;i++)
		{
			if(counta>countb)
			{
                if(b[i]-aa[i]<0)
				{
					sum+=n;
				}
				else if((b[i]-aa[i])%(counta-countb)==0)
				{
					x=(b[i]-aa[i])/(counta-countb);
					x++;
					if(n>x)
					sum+=(n-x);
				}
				else
				{
					x=(b[i]-aa[i])/(counta-countb);
					x++;
					if(n>x)
					sum+=(n-x);
				}
			}
			else if(counta<countb)
			{
				if(b[i]>=aa[i])
				{
					

				}
				else if((aa[i]-b[i])%(countb-counta)==0)
				{
					x=(aa[i]-b[i])/(countb-counta);
					if(x<=n)
					sum+=x;
					else
					sum+=n;
				}
				else
				{
					x=(aa[i]-b[i])/(countb-counta);
					x++;
					if(x<=n)
						sum+=x;
					else
						sum+=n;
				}
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}