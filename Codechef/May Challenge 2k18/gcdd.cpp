#include<iostream>
using namespace std;
#include<bits/stdc++.h>
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
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,j,count1=0,c,x;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		for(i=0;i<n-1;i++)
		{
			x=gcd(a[i],a[i+1]);
			//cout<<x<<" ";
			if(x==1)
				break;
			else
				count1++;
		}
		if(x==1)
			cout<<"0\n";
		else
			cout<<"-1\n";

}
return 0;
}