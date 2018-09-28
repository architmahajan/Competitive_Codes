#include<iostream>
using namespace std;
int main()
{
	int t,n,m,i,j;
	cin>>t;
	while(t--)
	{
		long long int flag=0;
        cin>>n>>m;
        long long int a[n][m];
        for(i=0;i<n;i++)
        {
        	for(j=0;j<m;j++)
        		cin>>a[i][j];
        }
        //cout<<"A";
        for(i=0;i<n;i++)
        {
        	for(j=0;j<m;j++)
        	{
        		//cout<<"X";
        		if(a[i][j]==-1)
        		{
        			if(i==0 && j==0)
        			{
        				a[i][j]=1;
        			}
        			else if(i==0)
        				a[i][j]=a[i][j-1];
        			else if(j==0)
        			{
        				a[i][j]=a[i-1][j];
        			}
        			
        			else
        			{
        				a[i][j]=max(a[i-1][j],a[i][j-1]);
        			}
        		}
        		else
        		{
        			//cout<<"Y";
        			if(i==0 && j==0)
        			{
        				//cout<<"Y";
        				continue;
        			}
                    else if(i==0)
        			{
        				if(a[i][j]>=a[i][j-1])
        				{
                             continue;
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
                            continue;
        				}
        				else
        				{
        					flag=1;
        					break;
        				}
        			}
        			else
        			{
        				if(a[i][j]>=a[i-1][j] && a[i][j]>=a[i][j-1])
        				{
                             continue;
        				}
        				else
        				{
        					flag=1;
       						break;
   						}
        			}
        		}
        	}
        	if(flag==1)
        		{
        			//cout<<i<<" "<<j<<"\n";
        			break;
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