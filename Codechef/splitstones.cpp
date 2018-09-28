#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,x,y,s=0,ss=0,f=0;
		cin>>a>>b>>c>>x>>y;
		s=a+b+c;
		ss=x+y;
		if(s==ss)
		{
			if((a<=y ||b<=y||c<=y) && (b<=x|| c<=x || a<=x))
				f=1;

		}
		if(f==0)
			cout<<"NO\n";
		else
			cout<<"YES\n";

	}
	return 0;
}