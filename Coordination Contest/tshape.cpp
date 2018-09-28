#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int flag=0;
		vector<pair<int,int>>v;
		map<int ,int>mpx;
		map<int,int>mpy;
		int x,y,i;
		int a[5],b[5];
		for(i=0;i<5;i++)
			{
				cin>>a[i]>>b[i];
				v.push_back(make_pair(a[i],b[i]));
				mpx[a[i]]=b[i];
				mpy[b[i]]=a[i];
			}
		sort(v.begin(),v.end());
		x=v[0].first;
		y=v[0].second;
		int c1=1;
		//cout<<x<<" "<<y<<"\n";
		for(i=1;i<5;i++)
		{
			//cout<<v[i].first<<" "<<v[i].second<<"x\n";
			//cout<<x<<" "<<y<<"x\n";
			if(x==v[i].first && v[i].second==y+1)
			{

				c1++;
				//cout<<c1<<"\n";
				y=v[i].second;
				
				if(c1==3)
				{
					//cout<<x<<" "<<y<<"\n";
					//cout<<mpx[x-1]<<" "<<mpx[x+1]<<"\n";
					if(mpx[x-1]==y && mpx[x+1]==y)
					{
						flag=1;
					}
					else if(mpx[x-1]==y-2 && mpx[x+1]==y-2)
					{
						flag=1;
					}
					else if(mpx[x-1]==y-1 && mpx[x-2]==y-1)
					{
						flag=1;
					}
					else if(mpx[x+1]==y-1 && mpx[x+2]==y-1)
					{
						flag=1;
					}
					if(flag==1)
						break;
					else
						c1--;
				}
			}
			else
			{
				x=v[i].first;
				y=v[i].second;
				c1=1;
			}
		}
		if(flag==1)
			cout<<"Yes\n";
		else
			cout<<"No\n";

	}
	return 0;
}