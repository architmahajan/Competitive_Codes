#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n],t[n],i,maxi,flag=0,pos[n],c=0,j=0;
	long long int sum=0,summ=0,sum1=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		{
			cin>>t[i];
			if(t[i]==1)
			summ+=a[i];
		}
    for(i=0;i<k;i++)
    {
    	if(t[i]==1)
    	{
    		sum1+=a[i];
    		pos[c++]=i;
    	}
    	sum+=a[i];
	}
	maxi=summ-sum1+sum;
	//cout<<summ<<" "<<sum1<<" "<<sum<<" "<<maxi<<"\n";
	for(;i<n;i++)
	{
		sum+=a[i];
		sum-=a[i-k];
		if(t[i]==1)
		{
			sum1+=a[i];
			pos[c++]=i;
		}
		if(sum1>0){
		if(pos[j]>=i-k+1 && pos[j]<=i)
		{

		}
		else
		{
			sum1-=a[pos[j]];
			j++;
		}}
		if(maxi<summ-sum1+sum)
			maxi=summ-sum1+sum;
		//cout<<summ<<" "<<sum1<<" "<<sum<<" "<<maxi<<"\n";
	}
	cout<<maxi;
	return 0;
}