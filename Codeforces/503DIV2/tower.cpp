#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	long long int n,h,a,b,k,t1,f1,t2,f2,time=0;
	cin>>n>>h>>a>>b>>k;
	while(k--)
	{
		time=0;
		cin>>t1>>f1>>t2>>f2;
		if(t1!=t2){
		if(f1>=a && f1<=b)
		{

		}
		else if(f1>b)
		{
			time=f1-b;
			f1=b;
		}
		else if(f1<a)
		{
			time=a-f1;
			f1=a;
		}
	}
		//cout<<time<<" ";
		time+=abs(t2-t1);
		//cout<<time<<" ";
		if(f1>=f2)
		{
			time+=(f1-f2);
		}
		else
			time+=(f2-f1);
		cout<<time<<"\n";
	}
	return 0;
}
