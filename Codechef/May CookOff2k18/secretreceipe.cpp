#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x1,x2,x3,v1,v2;
		cin>>x1>>x2>>x3>>v1>>v2;
		float t1,t2;
		t1=abs(x3-x1);
		t1/=v1;
		t2=abs(x3-x2);
		t2/=v2;
		if(t1<t2)
			cout<<"Chef\n";
		else if(t2<t1)
			cout<<"Kefa\n";
		else
			cout<<"Draw\n";

	}
	return 0;
}