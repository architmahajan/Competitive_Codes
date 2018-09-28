#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	freopen("A-large.in", "r", stdin);
    freopen("A-large.out", "w", stdout);
	int t,c=0,ii,j,k,i;
	cin>>t;
	while(c<t)
	{
		c++;
		int count=0,flag=0,flag1=0;
		string s;
		cin>>s>>k;
		ii=0;
        for(i=ii;i<s.size();i++)
        {
        	flag=0;
        	if(s[i]=='+')
        		continue;
        	else if(s[i]=='-')
        	{
        		//cout<<i<<"\n";
        		if(i+k<=s.size())
        		{
        		for(j=0;j<k;j++)
        		{
        			if(s[j+i]=='+')
        				{
        					s[j+i]='-';
        					if(flag==0)
        					{
        						i=j+i-1;
        						flag=1;
        					}
        				}
        			else if(s[j+i]=='-')
        				s[j+i]='+';
        		}
        		if(flag==0)
        			i=i+k-1;
        		count++;
        		}
        		else
        			{
        				flag1=1;
        				break;
        			}
        	}
        }
        if(flag1==1)
        printf("Case #%d: IMPOSSIBLE\n",c);
    	else
    	{
    		printf("Case #%d: %d\n",c,count);
    	}
	}
	return 0;
}