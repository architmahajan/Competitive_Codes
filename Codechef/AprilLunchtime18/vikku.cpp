#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    if (a == 0 || b == 0)
       return 0;
 
    if (a == b)
        return a;
 
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,K;
		cin>>N>>K;
		long long int A[N];
		for(int i=0;i<N;i++)
			cin>>A[i];




		sort(A,A+N);

		int a=A[0];



		int x=A[0];
        for(long long int i=1;i<N;i++)
        {
            x=gcd(x,A[i]);
        }


        if(x==1)
        {
        	cout<<"YES"<<endl;
        	continue;
        }

		if(a<=K)
		{
			cout<<"YES"<<endl;
			continue;
		}
		int i=K;
		while(1)
		{
			for(;i>1;i--)
				if(a%i==0)
				{
					a=a/i;
					break;
				}
			if(a<=K)
				break;
			if(i<=2)
				break;
		}
		if(a<=K)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
	return 0;
}