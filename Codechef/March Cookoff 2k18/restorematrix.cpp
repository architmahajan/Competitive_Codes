#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int t,n,m,i,j;
	cin>>t;
	while(t--)
	{
		long long int a[200][200],flag=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
        	for(j=0;j<m;j++)
        		cin>>a[i][j];
        }
        for(i=0;i<n;i++)
        {
        	for(j=0;j<m;j++)
        		if(a[i][j]==-1)
        		{
        			if(i==0)
        				a[i][j]=a[i][j-1];
        			else if(j==0)
        			{
        				a[i][j]=a[i-1][j];
        			}
        			else if(i=0 && j==0)
        			{
        				a[i][j]=1;
        			}
        			else
        			{
        				a[i][j]=max(a[i-1][j],a[i][j-1]);
        			}
        		}
        		else
        		{
                    if(i==0)
        				{
        					if(a[i][j]>=a[i][j-1])
        					{

        					}
        					else
        						{
        							flag=1;
        							break;
        						}
        				}
        			else if(j==0)
        			{
        				if(a[i][j]>=a[i-1][j])
        				{

        				}
        				else
        						{
        							flag=1;
        							break;
        						}
        			}
        			else if(i=0 && j==0)
        			{
        				
        			}
        			else
        			{
        				if(a[i][j]>=a[i-1][j] && a[i][j]>=a[i][j-1])
        				{

        				}
        				else
        						{
        							flag=1;
        							break;
        						}
        			}
        		}
        }
        if(flag==0)
        {
        	for(i=0;i<n;i++)
        {
        	for(j=0;j<m;j++)
        		cout<<a[i][j]<<" ";
        	cout<<"\n";
        }
        }
        else
        	cout<<"-1\n";

	}
	return 0;
}