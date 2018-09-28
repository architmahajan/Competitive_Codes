#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int n;
	scanf("%d",&n);
	int l,r,maxi,ans,u=0,i,uu=0,mal1,mal2,mir1,mir2;
	map<long long int,int>mpl;
	map<long long int,int>mpr;
	scanf("%d%d",&l,&r);
	if(mpl.count(l))
			{if(mpl[l]>r)
				mpl[l]=r;}
		else
			mpl[l] = r;
		if(mpr.count(r))
			{if(mpr[l]<l)
				mpr[l]=l;}
		else
			mpr[r] = l;
	mal1=l,mir1=r;
	scanf("%d%d",&l,&r);
	if(mpl.count(l)){
			if(mpl[l]>r)
				mpl[l]=r;}
		else
			mpl[l] = r;
		if(mpr.count(r))
			{if(mpr[l]<l)
				mpr[l]=l;}
		else
			mpr[r] = l;
		//cout<<mpl[l]<<" "<<mpr[r]<<"\n";
	if(mal1<=l)
		{
			mal2=mal1;
			mal1=l;
		}
	else
		{
			mal2=l;
		}
	if(mir1>=r)
		{
			mir2=mir1;
			mir1=r;
		}
	else
		{
			mir2=r;
		}
	for(i=2;i<n;i++)
	{
		scanf("%d%d",&l,&r);
		if(l>=mal1)
		{
			mal2=mal1;
			mal1=l;
			
		}
		else if(l<mal1 && l>=mal2)
		{
			mal2=l;
		}
		if(r<=mir1)
		{
			mir2=mir1;
			mir1=r;
			
		}
		else if(r>mir1 && r<=mir2)
		{
			mir2=r;
		}
		if(mpl.count(l))
			{if(mpl[l]>r)
				mpl[l]=r;}
		else
			mpl[l] = r;
		if(mpr.count(r))
			{if(mpr[l]<l)
				mpr[l]=l;}
		else
			mpr[r] = l;
		//cout<<mpl[l]<<" "<<mpr[r]<<"\n";
	}
	//cout<<mal1<<" "<<mal2<<" "<<mir1<<" "<<mir2<<"\n";
	long long int lll=mal1;
	//cout<<mpl[lll]<<"\n";
	ans=0;
	maxi=0;
	if(mpl[lll]==mir1)
	{
		if(mir2>=mal2)
		{ans=mir2-mal2;
		maxi=ans;//cout<<maxi<<"\n";
	}
	}
	else
	{
		//cout<<"y";
		if(mir1>=mal2){
		ans=mir1-mal2;
		maxi=ans;
		//cout<<maxi<<"\n";
	}
	}
	long long int rrr=mir1;
	//cout<<mpr[rrr]<<"\n";
	if(mpr[rrr]==mal1)
	{
		if(mir2>=mal2)
		ans=mir2-mal2;
		if(ans>maxi)
		maxi=ans;
	//cout<<maxi<<"x\n";
	}
	else
	{
		if(mir2>=mal1)
		ans=mir2-mal1;
		if(ans>maxi)
		maxi=ans;
	//cout<<maxi<<"\n";
	}
	printf("%d",maxi);
	return 0;
}