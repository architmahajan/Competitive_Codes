#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,c1=0,c2=0,i;
	cin>>n>>k;
	string s;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='(' && c1<k/2)
			{
				c1++;
				cout<<"(";
			}
		else if(s[i]==')' && c2<k/2)
		{
			c2++;
			cout<<")";
		}

	}
	return 0;
}