#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

int main()
{
	int n,count1=0,c2=0,i;
	cin>>n;
	string s;
	cin>>s;
	int b[26];
	for(i=0;i<26;i++)
		b[i]=0;
	for(i=0;i<s.size();i++)
	{
		b[s[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{

		if(b[i]>=2)
		{
				c2++;
		}
	}
	if(c2>=1 || n==1)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}	