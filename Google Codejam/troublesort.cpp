#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t,tc=0;
	cin>>t;
	while(tc<t)
	{
		tc++;
		int n,i,k,flag=0;
		cin>>n;
		int a[n],temp,b[n],c[n],var1=0,var2=0,var=0,d[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			if(i%2==0)
				b[var1++]=a[i];
			else
				c[var2++]=a[i];
		}
		/*for(i=0;i<n-2;i++)
		{
			for(k=0;k<n-2;k++)
			{
				if(a[k]>a[k+2])
				{
					temp=a[k];
					a[k]=a[k+2];
					a[k+2]=temp;
				}
			}
		}*/

		sort(b,b+var1);
		sort(c,c+var2);
		if(var1==var2)
		{
			for(i=0;i<var1;i++)
				{
					d[var++]=b[i];
					d[var++]=c[i];
				}
		}
		else
		{
			for(i=0;i<var2;i++)
				{
					d[var++]=b[i];
					d[var++]=c[i];
				}
				d[var++]=b[i];
		}
		/*for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
		for(i=0;i<n;i++)
			cout<<d[i]<<" ";*/
		temp=d[0];
		for(i=1;i<n;i++)
		{ 
			if(temp<=d[i])
				temp=d[i];
			else{
				cout<<"Case #"<<tc<<": "<<i-1<<"\n";
				flag=1;
				break;
			}
		}
		
		if(flag==0)
		cout<<"Case #"<<tc<<": OK\n";
	}
	return 0;
}