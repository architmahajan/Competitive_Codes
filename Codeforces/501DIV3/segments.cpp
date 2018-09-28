#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[101],b[101],u=0,i,l,r,j;
	for(i=1;i<=m;i++)
		a[i]=0;
	for(i=0;i<n;i++)
	{
		cin>>l>>r;
		for(j=l;j<=r;j++)
			a[j]=1;
	}
	for(i=1;i<=m;i++)
		if(a[i]==0)
			b[u++]=i;
	cout<<u<<"\n";
	for(i=0;i<u;i++)
		cout<<b[i]<<" ";
	cout<<"\n";
	return 0;
}