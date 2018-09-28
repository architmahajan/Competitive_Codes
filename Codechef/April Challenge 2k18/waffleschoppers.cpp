#include<iostream>
using namespace std;
int main()
{
	int t,tc=0;
	cin>>t;
	while(tc<t)
	{
		tc++;
		int r,c,h,v,count1=0,x,y,countt=0,c1,flag=0,sum=0;
		
		string ss;
		cin>>r>>c>>h>>v;
		int s[r+1][c+1];
		int a[r+1][c+1],b[r+1][c+1],i,j;
		for(i=0;i<=r;i++)
		{
			for(j=0;j<=c;j++)
				{
					a[i][j]=0;
					b[i][j]=0;
				}
		}
		for(i=0;i<r;i++)
		{
			cin>>ss;
			for(j=0;j<c;j++)
				{
					
					if(ss[j]=='@')
						{
							count1++;
							s[i][j]=1;
						}
						else
							s[i][j]=0;
				}
		}
		for(i=0;i<r;i++){
			for(j=0;j<c;j++)
				{
					cout<<s[i][j]<<" ";
				}
				cout<<"\n";
			}
		for(i=0;i<r;i++)
		{
			sum=0;
			for(j=0;j<c;j++)
			{
				if(s[i][j]==1)
					{
						sum++;
					}
						a[i][j]=sum;
			}
		}

		for(j=0;j<r;j++)
		{
			sum=0;
			for(i=0;i<c;i++)
			{
				if(s[i][j]==1)
						sum++;
					b[i][j]=sum;
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<"\n";
		}
		if(count1%((h+1)*(v+1))!=0)
			{
				cout<<"Case #"<<tc<<": IMPOSSIBLE\n";
				continue;
			}
		else
		{
			c1=count1/((h+1)*(v+1));
			sum=0;
			countt=0;
			cout<<count1<<"\n";
			for(i=0;i<r;i++)
			{
				sum+=a[i][c-1];
				cout<<sum<<" "<<count1/2<<" "<<countt<<"\n";
				if(sum==count1/2)
					{
						countt++;
						sum=0;
					}
			}
			if(countt==2)
			{
				cout<<"x";
				sum=0;
				countt==0;
				for(j=0;j<c;i++)
				{
				sum+=b[j][r-1];
				if(sum==count1/2)
					{
						countt++;
						sum=0;
					}
				}
				if(countt==2)
				{
				cout<<"Case #"<<tc<<": POSSIBLE\n";
					continue;
				}
				else
				{
				cout<<"Case #"<<tc<<": IMPOSSIBLE\n";
				continue;
				}
			}
			else
			{
				cout<<"Case #"<<tc<<": IMPOSSIBLE\n";
				continue;
			}
			

		}
	}
	return 0;
}