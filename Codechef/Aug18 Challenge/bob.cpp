#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;string s1="",s2="",s3="",s4="",s5="",s6="",s7="",s8="";
		int c[2],f=0,n;
		c[0]=0;
		c[1]=0;
		cin>>a;
		cin>>b;
		s1+=a[0];
		s1+=a[1];
		s1+=a[2];
		s2+=a[0];
		s2+=a[1];
		s2+=b[2];
		s3+=a[0];
		s3+=b[1];
		s3+=b[2];
		s4+=b[0];
		s4+=b[1];
		s4+=b[2];
		s5+=b[0];
		s5+=a[1];
		s5+=a[2];
		s6+=b[0];
		s6+=b[1];
		s6+=a[2];
		s7+=a[0];
		s7+=b[1];
		s7+=a[2];
		s8+=b[0];
		s8+=a[1];
		s8+=b[2];
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		sort(s3.begin(),s3.end());
		sort(s4.begin(),s4.end());
		sort(s5.begin(),s5.end());
		sort(s6.begin(),s6.end());
		sort(s7.begin(),s7.end());
		sort(s8.begin(),s8.end());
		if(s1=="bbo" || s2=="bbo"|| s3=="bbo"|| s4=="bbo"|| s5=="bbo"|| s6=="bbo"|| s7=="bbo"|| s8=="bbo")
			f=1;
		if(f==1)
			cout<<"yes\n";
		else
			cout<<"no\n";

	}
	return 0;
}