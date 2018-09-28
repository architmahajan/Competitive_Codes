#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0,i,c=1;
	cin>>n;
	if(n>=3)
	{
		cout<<"1 3 "
		for(i=2;i<=n;i++)
		{
			if(c<=i)
				cout<<c<<" ";
			c+=2;
		}
	}
	return 0;
}