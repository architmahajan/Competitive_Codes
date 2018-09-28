#include<iostream>
using namespace std;
int main()
{
	int t,i,b[1000005],u=0;
	cin>>t;
	for(i=2;i<1000001;i++)
	{
		a=i;
		for(j=2;j<sqrt(i);j++)
		{
			if(j%a!=0 and j<a)
				continue;
			else if(j==a)
				b[u++]=a;
			else if(j%a==0 and j<a)
				break;
		}
	}
	while(t--)
	{
		int n,m,count1=0,count2=0
		cin>>n>>m;
		for(i=n;i<m;i++)
		{
			a=i;
			for(j=0;j<u;j++)
			{
				if(a%b[j]==0 && a<=b[j])
					count1++;
			}
		}
		cout<<count1<<endl;
	}
	return 0;
}