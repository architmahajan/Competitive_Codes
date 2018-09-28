#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,j,ii,pos;
	cin>>n>>k;
	string t,s;
	cin>>t;
	if(n==1)
	{
		for(i=0;i<k;i++)
			cout<<t;
		return 0;
	}
	//cout<<t<<" ";
	pos=0;
	for(i=1;i<t.size();i++)
	{
		//cout<<i<<" ";
		while(t[pos]!=t[i] && i<t.size())
			{
				//cout<<i<<" ";
				i++;
			}
		if(t[pos]==t[i] && i<t.size())
			{
				//cout<<"x";
				pos++;
			}
		if(i==t.size())
			break;
		//cout<<pos<<" "<<i<<"\n";
	}
	//cout<<pos<<i<<" ";
	if(t[pos-1]==t[t.size()-1])
	{

	}
	else
		pos=0;
	s=t;
	for(j=1;j<k;j++)
	{
		for(ii=pos;ii<t.size();ii++)
			s+=t[ii];
	}
	cout<<s;
	return 0;
}