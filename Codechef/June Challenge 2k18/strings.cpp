#include<iostream>
using namespace std;
#include<bits/stdc++.h>
map<string,int> mp;
map<string,int>::iterator itr,itl,it,i1,ii;
vector<string>vec;
int main()
{
	
	int n,q,l1,l2,i;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
		{
			cin>>s[i];
			mp.insert( pair<string,int>(s[i],i));
		}
	cin>>q;
	while(q--)
	{
		int r,lcr=-1,lcl=-1,count1=0;
		string p;
		cin>>r>>p;
		l1=p.size();
		it=mp.find(p);
		/*for(i1=mp.begin();i1!=mp.end();i1++)
				cout<<i1->first<<" "<<i1->second<<"\n";*/
		if(it!=mp.end() && it->second<r)
			{
				cout<<p<<"\n";
				continue;
			}
		else
		{
			if(it==mp.end())
			mp.insert( pair<string,int>(p,-1));
			/*for(i1=mp.begin();i1!=mp.end();i1++)
				cout<<i1->first<<" "<<i1->second<<"\n";*/
			i1=mp.find(p);
			itr=i1;
			count1=0;
			itr++;
			while(itr!=mp.end())
			{
				count1=0;
				if(itr->second<r)
				{
					string ss=itr->first;
					l2=ss.size();
					int mini=min(l1,l2);
					for(i=0;i<mini;i++)
					{
						if(p[i]==ss[i])
							count1++;
						else
							break;
					}
					lcr=count1;
					break;
				}
				itr++;
			}
			itl=i1;
			while(itl!=mp.begin())
			{
				itl--;
				count1=0;
				if(itl->second<r)
				{
					string ss=itl->first;
					l2=ss.size();
					int mini=min(l1,l2);
					for(i=0;i<mini;i++)
					{
						if(p[i]==ss[i])
							count1++;
						else
							break;
					}
					lcl=count1;
					break;
				}
			}
			if((lcr==-1  || lcr==0)&& (lcl==-1  || lcl==0))
				{
					for(i=0;i<r;i++)
						vec.push_back(s[i]);
					sort(vec.begin(),vec.end());
					cout<<vec[0]<<"\n";
					vec.clear();
				}
			else if(lcr>lcl)
				cout<<itr->first<<"\n";
			else
			{
				ii=itl;
				//cout<<itl->first<<" ";
				while(ii!=mp.begin())
				{
					count1=0;
					ii--;
					//cout<<itl->first<<" ";

					if(ii->second<r)
					{
						string ss=ii->first;
						l2=ss.size();
						int mini=min(l1,l2);
						for(i=0;i<mini;i++)
						{
							if(p[i]==ss[i])
							count1++;
							else
							break;
						}
					}
					else
						continue;
					if(count1==lcl)
					{
						itl=ii;
						continue;
					}
					else
					{
						break;
					}
				}
				cout<<itl->first<<"\n";			
			}
			if(it==mp.end())
				mp.erase(p);
		}
	}
	return 0;
}