#include<iostream>
using namespace std;
int main()
{
	int n,count1=0,i;
	cin>>n;
	while(n--)
	{
		int flag1=0;
		string s;
		cin>>s;
		for(i=0;i<s.size();i++)
		{
			if(flag1==1)
			{
				if((s[i-1]=='c' && s[i]=='h') || (s[i-1]=='h' && s[i]=='e') || (s[i-1]=='e' && s[i]=='f'))
				{
					flag1=2;
					break;
				}
				else
					{
						flag1=0;
						i--;
					}
			}
            else if(flag1==0)
            {
            	if(s[i]=='c'||s[i]=='h'||s[i]=='e')
            		{
            			flag1=1;
            		}
            }
		}
		if(flag1==2)
			count1++;
	}
	cout<<count1;
	return 0;
}