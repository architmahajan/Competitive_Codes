#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
int main()
{
	long long int a,b,w,h,gc,aa,bb;
	cin>>a>>b>>w>>h;
	gc=gcd(w,h);
	w/=gc;
	h/=gc;
	aa=a/w;
	bb=b/h;
	cout<<min(aa,bb);
	return 0;
}