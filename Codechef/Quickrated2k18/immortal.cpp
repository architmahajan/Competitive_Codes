#include<iostream>
using namespace std;
int main()
{
	int t,a[26],i;
	cin>>t;
	for(i=0;i<26;i++)
		a[i]=0;
	a['f'-'a']=1;
	a['r'-'a']=1;
	a['i'-'a']=1;
	a['e'-'a']=1;
	a['z'-'a']=1;
	a['a'-'a']=1;
	//cout<<a[0]<<" "<<a[5]<<endl;
	while(t--)
	{
		string s,str="";
		cin>>s;
		int flag=0,count1=0,b[100005],u=0;
		if(a[s[0]-'a']==1)
			{
				flag=1;
				count1++;
			}
		else if(a[s[0]-'a']==0)
			{
				flag=2;
				count1++;
			}
		for(i=1;i<s.size();i++)
		{
			//cout<<a[s[i]-'a']<<" ";
			if(flag==1 && a[s[i]-'a']==1)
			{
				count1++;
			}
			else if(flag==2 && a[s[i]-'a']==0)
			{
				count1++;
			}
			else if(flag==1 && a[s[i]-'a']==0)
			{
				b[u++]=count1;
				//cout<<"x"<<count1<<endl;
				count1=1;
				flag=2;
			}
			else if(flag==2 && a[s[i]-'a']==1)
			{
				b[u++]=count1;
				//cout<<"y"<<count1<<endl;
				count1=1;
				flag=1;
			}
		}
		//cout<<count1<<endl;
				b[u++]=count1;
			for(i=0;i<u;i++)
				cout<<b[i];
		cout<<endl;
			}
	return 0;
}