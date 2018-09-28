#include<iostream>
using namespace std;
int main()
{
	long long int t,i,j,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int a[n],b[3000],avg;
		long long int sum=0;
		for(i=0;i<=3000;i++)
			b[i]=0;
		for(i=0;i<n;i++)
			{
				cin>>a[i];
				a[i]+=1500;
				b[a[i]]++;
			}
		for(i=0;i<=3000;i++)
		{
			if(b[i]>0)
			{
				if(b[i]>1)
				{
					sum+=(b[i]*(b[i]-1))/2;
					//cout<<i<<" "<<j<<" "<<sum<<"\n";
				}
				for(j=i+1;j<=3000;j++)
				{
					if(i%2==1 && j%2==1 && b[i]>0 && b[j]>0)
					{
						avg=(i+j)/2;
						if(b[avg])
						{
							sum+=(b[i]*b[j]);
							//cout<<i<<" "<<j<<" "<<sum<<"\n";
						}

					}
					else if(i%2==0 && j%2==0 && b[i]>0 && b[j]>0)
					{
						avg=(j+i)/2;
						if(b[avg])
						{
							sum+=(b[i]*b[j]);
							//cout<<i<<" "<<j<<" "<<sum<<"\n";
						}
					}

				}
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}