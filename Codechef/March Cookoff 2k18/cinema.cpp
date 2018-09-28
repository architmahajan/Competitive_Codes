#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	long long int t,x,y,yva,yvb,xx,xxx;
	cin>>t;
	while(t--)
	{
		cin>>x;
		y=ceil(sqrt(1+(4*2*x)));
		//cout<<y<<"\n";

		y=(y-1)/2;
		while(x>(y*(y+1)/2))
		{
            y++;
		}
		
		yva=(y*(y+1))/2;
		y--;
		yvb=(y*(y+1))/2;
		//cout<<yva<<" "<<yvb<<"\n";
		xx=((y+1)+(yva-x));
		xxx=(y)+(x-yvb);
		//cout<<xx<<" "<<xxx<<"\n";
		cout<<min(xx,xxx)<<"\n";
	}
	return 0;
}
