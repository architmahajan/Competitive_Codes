#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	int a[n+1],b[n+1],i,j,next;

	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			b[j]=0;
		b[i]=1;
		next=a[i];
		while(b[a[next]]!=2)
		{
			b[next]++;
			//cout<<next<<b[next]<<"\n";
			if(b[next]==2)
				break;
			next=a[next];
			//cout<<next<<"\n";
		}

		cout<<next<<" ";
	}
	return 0;
}