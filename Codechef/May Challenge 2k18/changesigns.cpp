    #include<iostream>
    using namespace std;
    #include<bits/stdc++.h>
    long long int maxi=100000000000000009;
    long long int a[500005],sum=0,i,x,flag=0,j,pp[500005][2],pn[500005][2],np[500005][2],s=0,mini;
    long long int backtrack(long long int i,long long int n)
    {
    	int x;
    	if(i==n+1)
    		return 0;
    	
    	if(i==2)
    			{
    				pp[i][0]=a[i-1]+a[i];
    				if(a[i-1]>a[i])
    				{
    					pn[i][0]=a[i-1]-a[i];
    				}
    				else
    				{
    					pn[i][0]=maxi;
    				}
    				if(a[i-1]<a[i])
    				{
    					np[i][0]=a[i]-a[i-1];
    				}
    				else
    				{
    					np[i][0]=maxi;
    				}
    				//cout<<"y\n";
    				x=backtrack(i+1,n);
    				//cout<<x<<"\n";
    				if(x==1)
    				{
     
    				}
    				else if(x==2)
    					{
    						a[i-1]=-1*a[i-1];
    					}
    				else if(x==3)
    				{
    					a[i]=-1*a[i];
    				}
    			}
    			else
    			{
    				if(pp[i-1][0]<np[i-1][0])
    					{
    						pp[i][0]=pp[i-1][0]+a[i];
    						pp[i][1]=1;
    					}
    				else
    					{
    						pp[i][0]=np[i-1][0]+a[i];
    						pp[i][1]=2;
    					}
    				if(a[i]>a[i-1])
    					{
    						np[i][0]=pn[i-1][0]+a[i];
    						np[i][1]=3;
    					}
    				else
    					{
    						np[i][0]=maxi;
    						np[i][1]=4;
    					}
    				if(a[i-1]>(a[i]+a[i-2]))
    				{
    					if(pp[i-1][0]<np[i-1][0])
    					{
    						pn[i][0]=pp[i-1][0]-a[i];
    						pn[i][1]=1;
    					}
    					else
    					{
    						pn[i][0]=np[i-1][0]-a[i];
    						pn[i][1]=2;
    					}
     
    				}
    				else if(a[i-1]>a[i])
    				{
    					pn[i][0]=pp[i-1][0]-a[i];
    					pn[i][1]=1;
    				}
    				else
    				{
    					pn[i][0]=maxi;
    					pn[i][1]=4;
    				}
    				//cout<<"y\n";
    				x=backtrack(i+1,n);
    				//cout<<x<<"\n";
    				//cout<<"x "<<i<<" "<<pp[i][0]<<" "<<np[i][0]<<" "<<pn[i][0]<<"\n";
    				if(i==n)
    				{
    					if(pp[n][0]<=np[n][0])
    					{
    						if(pp[n][0]<=pn[n][0])
    						x=1;
    					}
    					else if(pp[n][0]<=pn[n][0])
    					{
    						if(pp[n][0]<=np[n][0])
    						x=1;
    					}
    					if(np[n][0]<=pp[n][0])
    					{
    						if(np[n][0]<=pn[n][0])
    						x=2;
    					}
    					else if(np[n][0]<=pn[n][0])
    					{
    						if(np[n][0]<=pp[n][0])
    						x=2;
    					}
    					if(pn[n][0]<=pp[n][0])
    					{
    						if(pn[n][0]<=np[n][0])
    						x=3;
    					}
    					else if(pn[n][0]<=np[n][0])
    					{
    						if(pn[n][0]<=pp[n][0])
    						x=3;
    					}
    				}
    				if(x==1)
    					return pp[i][1];
    				else if(x==2)
    					return np[i][1];
    				else if(x==3)
    				{
    					a[i]=-1*a[i];
    					return pn[i][1];
    				}
     
    			}
    }
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n;
    		cin>>n;
    		
    		for(i=1;i<=n;i++)
    		{
    			cin>>a[i];
    		}
    		if(n>2)
    		backtrack(2,n);
    		else if(n==2)
    		{
    				if(a[2]>a[1])
    				{
    					a[1]=-1*a[1];
    				}
    				if(a[1]>a[2])
    				{
    					a[2]=-1*a[2];
    				}
    		}
    		for(i=1;i<=n;i++)
    			cout<<a[i]<<" ";
    		cout<<"\n";
    	}
    	return 0;
    } 