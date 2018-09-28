#include<iostream>
using namespace std;
int main()
{
	long long int t,n,i,j,xx;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int a[n+1],sum[n+1],ans[n+1];
		sum[0]=0;
		for(i=1;i<=n;i++)
			{
				ans[i]=0;
				cin>>a[i];
				sum[i]=sum[i-1]+a[i];
			}
        for(i=1;i<=n;i++)
        {
        	
        	for(j=i+1;j<=n;j++)
        	{
        		xx=sum[j-1]-sum[i];
        		if(a[i]>=xx)
        			ans[j]+=1;
        		else 
        			break;
        	}
        		for(j=i-1;j>0;j--)
        		{
        			xx=sum[i-1]-sum[j];
        			if(a[i]>=xx)
        				ans[j]+=1;
        			else
        				break;
        		}
        }
        for(i=1;i<=n;i++)
        	{if(i<n)
        	cout<<ans[i]<<" ";
            else
            	cout<<ans[i];}
        cout<<"\n";
	}
	return 0;
}