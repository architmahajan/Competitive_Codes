#include<iostream>
using namespace std;
int main()
{
	int n,m,k,i;
	cin>>n>>m>>k;
	int a[n],p[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>p[i];
	for(i=0;i<n;i++)
		{if(k>1)
		cout<<a[i]+k-2<<" ";
	    else
	    	cout<<a[i]+k-2<<" ";}
	return 0;
	
}