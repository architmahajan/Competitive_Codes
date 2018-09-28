#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	long long int x,y;
	double xx,yy;
	cin>>x>>y;
	xx=y*log10(x);
	yy=x*log10(y);
	if(x==y)
		cout<<"=";
	else if(x==1)
		cout<<"<";
	else if(y==1)
		cout<<">";
	else if(xx==yy)
		cout<<"=";
	else if(xx>yy)
		cout<<">";
	else
		cout<<"<";
	return 0;
}