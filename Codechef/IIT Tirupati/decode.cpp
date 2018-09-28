#include<bits/stdc++.h> 
using namespace std;
 
typedef long long int ll;
 
int main()
{	ll t;
	scanf("%lld",&t);
	string s[25];
	s[0]='9';
	int i,j;
	for(i=1;i<21;i++)
	{
		char c=s[i-1][0];
		string ss="";
		
		for(j=0;j<s[i-1].size();j++)
		{
			int cnt=0;
			c=s[i-1][j];
			while(c==s[i-1][j] && j<s[i-1].size())	j++,cnt++;
			j--;
			ss+=cnt+'0';
			ss+=c;
		}
		s[i]=ss;
	}
	while(t--)
	{
		int n;
		cin>>n;
		cout<<s[n]<<"\n";
	}
    return 0;
}