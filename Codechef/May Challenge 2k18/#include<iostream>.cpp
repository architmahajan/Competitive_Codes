#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int m,n,x,y,i,j,k; 
		cin>>m>>n;
		long long int a[m],b[m],diff1[m],diff2[m],fib[n+1],sum=0;
		for(i=0;i<m;i++)
		cin>>a[i];
		for(i=0;i<m;i++)
		cin>>b[i];
		for(i=1;i<m;i++)
			diff1[i]=a[i]-a[i-1];
		for(i=1;i<m;i++)
			diff2[i]=b[i]-b[i-1];
		fib[1]=a[0];
		fib[2]=b[0];
		for(k=3;k<=n;k++)
			fib[k]=fib[k-1]+fib[k-2];
		result[0]=fib[n];
		for(i=1;i<m;i++)
		{
			result[i]=result[i-1]+(diff2[i]*(n-2));
		}
		for(i=0;i<m;i++)
			sum+=result[i];
		result[0]=sum;
		for(i=1;i<m;i++)
		{
			result[i]=result[i-1]+(diff2[i]*(n-2));
		}
		cout<<result[m-1]<<"\n";
	}
	return 0;
}