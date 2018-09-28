#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,s,i;
	
	scanf("%d%d",&n,&s);
	int A[n+5];
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);

	sort(A,A+n);
	long long int count=0;
	count+=abs(s-A[n/2]);
			for(int j=n/2-1;j>=0;j--)
			{
			if(A[j]>s)
				count+=A[j]-s;
			}
	for(int j=n/2+1;j<n;j++)
	{
		if(A[j]<s)
			count+=s-A[j];
	}

	printf("%lld",count);
	return 0;
}