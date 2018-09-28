#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int kk,flag=1,count1=0,i,j,k,xx;
		cin>>s>>kk;
		for(i=0;i<s.size();i++)
		{
			int d[27],di=0,c=0;
			for(j=0;j<26;j++)
				d[j]=0;
			for(k=i;k<s.size();k++)
			{
				c=0;
				//cout<<k<<" ";
				if(d[s[k]-'a']==0)
					{
						di++;
					}
				d[s[k]-'a']++;
				flag=0;
				if(di>=kk)
				{
					for(int ii=0;ii<26;ii++)
					{
						if(d[ii]>0 && flag==0)
						{
							//cout<<"A"<<ii<<"\n";
							xx=d[ii];
							flag=1;
						}
						else if(d[ii]>0 && flag==1)
						{
							if(d[ii]==xx)
								{
									//cout<<"BB"<<ii<<"\n";
									c++;
								}
						}
					}
				}
				if(c==di-1 && flag==1)
					{
						count1++;
						//cout<<c<<" "<<di<<" "<<count1<<"\n";
					}
			}
		}
		cout<<count1<<"\n";
		
	}
	return 0;
}