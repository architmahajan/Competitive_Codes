#include<iostream>
using namespace std;
int main()
{
	int n,min1=10000000,min2=10000000,min3=10000000,i;
	cin>>n;
	int a[n];
	int t[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		{
			cin>>t[i];
			if(t[i]==1)
			{
				if(min1>a[i])
					min1=a[i];
			}
			if(t[i]==2)
			{
				if(min2>a[i])
					min2=a[i];
			}
			if(t[i]==3)
			{
				if(min3>a[i])
					min3=a[i];
			}
		}
	if(min1+min2<=min3)
		cout<<min1+min2;
	else
		cout<<min3;
}