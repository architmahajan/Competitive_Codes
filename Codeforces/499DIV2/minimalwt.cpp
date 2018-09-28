#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int n,k,c=0,sum=0,i;
	cin>>n>>k;
	string ss;
	cin>>ss;
	char s[n];
	for(i=0;i<ss.size();i++)
		s[i]=ss[i];
	sort(s,s+n);
	int prev=s[0];
	//cout<<prev<<" ";
	sum=prev-96;
	c=1;
	if(k==1)
		cout<<sum;
	else{
	for(i=1;i<n;i++)
	{
		int x=s[i];
		if((s[i]-prev)>1)
			{
				sum+=x-96;
				c++;
				prev=x;
				if(c==k)
					break;
				//cout<<prev<<" ";
			}
	}
	if(c==k)
		cout<<sum<<"\n";
	else cout<<"-1";}
	return 0;
}