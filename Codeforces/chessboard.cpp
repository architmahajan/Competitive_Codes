#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int n,i,sum[4],mid1,summ=0,mid2,j,k;
	cin>>n;
	int count1[4],count2[4];
	mid2=(n*n)/2;
	mid2++;
	mid1=mid2;
	string s[4][n];
	for(i=0;i<(4);i++)
	{
		count1[i]=0;
		count2[i]=0;
		for(j=0;j<n;j++)
		cin>>s[i][j];
	}
	for(i=0;i<(4);i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(j%2==0)
				{
					if(s[i][j][k]=='1')
					{
						count1[i]++;
					}
					k++;
					if(s[i][j][k]=='1' && k<n)
					{
						count2[i]++;
					}
				}
				else
				{
					if(s[i][j][k]=='1')
					{
						count2[i]++;
					}
					k++;
					if(s[i][j][k]=='1' && k<n)
					{
						count1[i]++;
					}
				}
			}
		}

	}
	for(i=0;i<4;i++)
	{
		//cout<<count1[i]<<" "<<count2[i]<<"\n";
		sum[i]=(mid1-count1[i])+(count2[i]);
	}
	sort(sum,sum+4);
	summ+=sum[0]+sum[1]+((n*n)-sum[2])+((n*n)-sum[3]);
	cout<<summ;
	return 0;
}