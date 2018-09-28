#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,s,i,j;
	cin>>p>>s;
	int score[p][s],num[p][s];
	vector<pair<int,int>>sc[p];
	std::vector<pair<int,int>> v;
	for(i=0;i<2*p;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<s;j++)
				cin>>score[i/2][j];
		}
		else
		{
			for(j=0;j<s;j++)
				cin>>num[i/2][j];
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<s;j++)
		{
			sc[i].push_back(make_pair(score[i][j],num[i][j]));
		}
		sort(sc[i].begin(),sc[i].end());

	}
	/*for(i=0;i<p;i++)
	{
		for(j=0;j<s;j++)
			cout<<sc[i][j].first<<" "<<sc[i][j].second<<"\n";
		cout<<"\n";
	}*/
	for(i=0;i<p;i++)
	{
		int c=0;
		for(j=0;j<s-1;j++)
		{
			if(sc[i][j].second>sc[i][j+1].second)
				c++;
		}
		v.push_back(make_pair(c,i));
	}
	sort(v.begin(),v.end());
	for(i=0;i<p;i++)
		cout<<v[i].second+1<<"\n";
	return 0;
}
