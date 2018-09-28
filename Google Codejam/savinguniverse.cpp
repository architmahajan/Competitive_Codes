#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t,tc=0;
	cin>>t;
	while(tc<t)
	{
		tc++;
		long long int d,sum=0,curr_str=1,i,counts=0,countc=0,var=0,sum1,hacks=0,count1=0,flag=0;;
		string s;
		cin>>d>>s;
		int a[s.size()];
		for(i=0;i<s.size();i++)
		{
			if(s[i]=='S')
				{
					a[var++]=curr_str;
					sum+=curr_str;
					counts++;
				}
			else if(s[i]=='C')
				{
					curr_str*=2;
					countc++;
				}
		}
		while(sum>d)
		{
			if(a[var-1]==1)
				break;
			a[var-1]/=2;
			hacks++;
			sum=0;
			for(i=0;i<var;i++)
			{
				//cout<<a[i]<<" ";
				sum+=a[i];
			}
			//cout<<sum<<"\n";
			sort(a,a+var);
		}
		if(d<sum)
			cout<<"Case #"<<tc<<": IMPOSSIBLE"<<endl;
		else
		cout<<"Case #"<<tc<<": "<<hacks<<endl;
	}
	
	return 0;
}