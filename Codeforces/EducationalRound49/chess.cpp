#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	long long int n,q;
	cin>>n>>q;
while(q--)
	{
		long long int x,y,pos,ans,nmid,aa,xx;
		cin>>x>>y;
		nmid=(n/2);
		if(n%2==0){
			if((x+y)%2==0){
				if(x%2==1){
					pos=y/2;
					pos=(pos);
					pos+=1;
					ans=((x-1)*nmid)+pos;}
				else{
					pos=y/2;
					pos=(pos);
					ans=((x-1)*nmid)+pos;}
				}
			else{
				ans=(n*n)/2;
				ans=(ans);
				if(x%2==1){
					pos=y/2;
					pos=(pos);
					ans=ans+((x-1)*nmid)+pos;}
				else{
					pos=y/2;
					pos=(pos);
					pos+=1;
					ans=ans+((x-1)*nmid)+pos;}
			}
		}
		else{
			if((x+y)%2==0){
				xx=(x+1)/2;
				xx=(xx);
				if(x%2==1){
					pos=y/2;
					pos=(pos);
					pos+=1;
					ans=((xx-1)*n)+pos;}
				else{
					pos=y/2;
					pos=(pos);
					ans=((xx-1)*n)+pos+(n+1)/2;}
				}
			else{
				ans=n*n/2;
				ans=(ans);
				ans+=1;
				xx=(x+1)/2;
				xx=(xx);
				if(x%2==1){
					pos=y/2;
					pos=(pos);
					ans=ans+((xx-1)*n)+pos;}
				else{
					pos=y/2;
					pos=(pos);
					pos+=1;
					aa=n/2;
					aa=(aa);
					ans=ans+((xx-1)*n)+pos+aa;}
				}}
		cout<<ans<<"\n";
	}
	return 0;
}






