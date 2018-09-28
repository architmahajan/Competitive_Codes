#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n,i,x,j,c,y;
	cin>>n;
	int a[n+1];unsigned long long int sum=0;
	for(i=1;i<=n;i++)
		cin>>a[i];
	//int b[n+1][40],bb[n+1][40],pos[n+1][40],p;
	int bb[n+1][32],pos[32],p;
	
	/*for(i=0;i<=n;i++)
	{
		*/for(j=0;j<32;j++)
			{
				pos[j]=0;
			}
	//}
			for(i=0;i<=n;i++)
	{
		for(j=0;j<32;j++)
			{
				bb[i][j]=0;
			}
	}
	for(i=1;i<=n;i++)
	{
		x=a[i];
		c=0;
		while(x>0)
		{
			y=x%2;
			if(y>0)
				{
					pos[c]=i;
				}
			bb[i][c]=bb[i-1][c]+y;
			if(y>0)
			{
				sum+=(n-i+1+i-bb[i][c])*(pow(2,c));
			}
			else if(bb[i][c]>0)
			{
				p=pos[c];
				if(p>=1)
				{
				
						sum+=(p-bb[p][c])*pow(2,c);
				}

			}
			x/=2;
			c++;
			
		}
		while(c<32)
				{
					bb[i][c]=bb[i-1][c];
					if(bb[i][c]>0)
					{

						p=pos[c];
						if(p>=1)
						{
							sum+=(p-bb[p][c])*pow(2,c);
						}

					}
					c++;
				}
	}
	
	
	cout<<sum;
    return 0;
}