
    #include<iostream>
    using namespace std;
    int main()
    {
    	long long int t,n,i,sum1=0,sum2=0,max1=0,max2=0;
    	cin>>t;
    	while(t--)
    	{
    		sum1=0,sum2=0,max1=0,max2=0;
    		cin>>n;
    		int a[n],b[n];
    		for(i=0;i<n;i++)
    		{ 
                        cin>>a[i];
                        sum1+=a[i];
                        if(a[i]>max1)
                	{
                		max1=a[i];
                	}
                
    		}
    		for(i=0;i<n;i++)
    		{
    			cin>>b[i];
                sum2+=b[i];
                if(b[i]>max2)
                	{
                		max2=b[i];
                	}
    		}
    		//cout<<sum1<<" "<<max1<<" "<<sum2<<" "<<max2<<"\n";
    		
    			if(sum1-max1<sum2-max2)
    				cout<<"Alice\n";
    			else if(sum1-max1>sum2-max2)
    				cout<<"Bob\n";
    			else 
    				cout<<"Draw\n";
    	}
    	return 0;
    }  