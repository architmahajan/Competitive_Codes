#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,x,y,z,zz;
		cin>>n;
		if(n==1)
		{
			cout<<"2\n";
			continue;
		}
		else if(n==2)
		{
			cout<<"1\n";
			continue;
		}
		x=log2(n);
		if(pow(2,x)==n)
		{
			cout<<"1\n";
			continue;
		}
		else
		{
			//cout<<x<<"\n";
			y=log2(n-pow(2,x));
			/*cout<<y<<"\n";
			cout<<pow(2,y)<<" "<<pow(2,x)<<" "<<pow(2,y+1)<<"\n";*/
			if(pow(2,x)+pow(2,y)==n)
			{
				cout<<"0\n";
				continue;
			}
			else
			{
				z=pow(2,x)+pow(2,y);
				z=n-z;
				zz=(pow(2,x)+pow(2,y+1))-n;
				if(x==y+1 && zz+1<=z)
					cout<<zz+1<<"\n";
				else
				cout<<min(z,zz)<<"\n";
			}
		}
	}
	return 0;
}

