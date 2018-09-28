#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	double a[n],b[n];int i,flag=0;
	for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
				flag=1;
		}
	for(i=0;i<n;i++)
		{
			cin>>b[i];
			if(b[i]==1)
				flag=1;
		}
	
	if(flag==1)
		cout<<"-1";
	else{
		double sum=(m*b[0])/(b[0]-1);
	for(i=n-1;i>0;i--)
		{
			sum=(sum*a[i])/(a[i]-1);
			sum=(sum*b[i])/(b[i]-1);
		}
		sum=(sum*a[0])/(a[0]-1);
		sum-=m;
		printf("%.8lf",sum);
	}
		return 0;
	}

