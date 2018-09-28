#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n,i,f=0,x,y,p,s,ff=0,val1,val2;
		long double mini,ans;
		scanf("%d", &n);
		int a[n];
		map<int ,int>mp;
		map<int ,int>:: iterator itt;
		for(i=0;i<n;i++)
			{
				scanf("%d", &a[i]);
				mp[a[i]]++;
			}
		std::vector<int> v;
		for(itt=mp.begin();itt!=mp.end();itt++)
		{
			if(itt->second>=2)
			v.push_back(itt->first);

			if(itt->second>=4)
			{
				x=itt->first;
				y=itt->first;
				ff=1;
				break;
			}
		}
		if(ff==1){
			cout<<x<<" "<<x<<" "<<y<<" "<<y<<"\n";
			continue;
		}
		for(i=0;i<v.size()-1;i++)
		{
			val1=v[i];
			val2=v[i+1];
			p=2*(val1+val2);
			s=(val1*val2);
			//cout<<p<<" "<<s<<"\n";
			ans=(p*p*1.0)/s;
			if(f==0)
			{
				mini=ans;
				f=1;
				x=val1;
				y=val2;
			}
			else if(ans<mini)
			{
				mini=ans;
				x=val1;
				y=val2;
			}

		}
		cout<<x<<" "<<x<<" "<<y<<" "<<y<<"\n";
	}
	return 0;
}
