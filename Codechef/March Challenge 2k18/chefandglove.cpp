#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int l[n],s[n],count1=0,flag=-1,i;
	    for(i=0;i<n;i++)
	    cin>>l[i];
	    for(i=0;i<n;i++)
	    cin>>s[i];
	    for(i=0;i<n;i++)
	    if(l[i]<=s[i])
	    continue;
	    else
	    break;
	    if(i==n)
	    {
	    	count1++;
	    	flag=0;
	    }
	    for(i=0;i<n;i++)
	    if(l[i]<=s[n-i-1])
	    continue;
	    else
	    break;
	    if(i==n)
	    {
	    	count1++;
	    	flag=1;
	    }
	    if(count1==0)
	    	cout<<"none\n";
	    else if(count1==1)
	    	{
	    		if(flag==0)
	    		cout<<"front\n";
	    	    else if(flag==1)
	    	    	cout<<"back\n";
	    	}
	    else 
	    	cout<<"both\n";
	}
	return 0;
}