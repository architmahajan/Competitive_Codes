#include<bits/stdc++.h> 
using namespace std;
 

 
// Driver program to test the above function
int main()
{
	int t;
	cin>>t;
	while(t--){
    long long int n,m,x,ans;;
    scanf("%lld%lld%lld",&m,&n,&x);
    if(x%9==0)
    {
    	while(m%9!=0)
	    {
	    	m++;
	    }
	    while(n%9!=0)
    	n--;
	    ans=(n-m)/9;
	    printf("%lld\n",ans+1);
	    continue;
    }
    while(m%9!=x)
    {
    	m++;
    }
    while(n%9!=x)
    	n--;
    ans=(n-m)/9;
    printf("%lld\n",ans+1);}
    return 0;
}